#include"../inc/instanciar.hpp"



separa_atributos instanciar_candidatos(string cargo, string extensao, string codigo)
{
  separa_atributos atributos;

  string arquivo = "./data/consulta_cand_2018_" + extensao + ".csv";

  ifstream file(arquivo);

  if(!file.is_open()){throw(file.is_open());}
    int k = 0;
    bool cargo_confere, codigo_confere, achou_candidato;
    string x, y, vice;

    while(getline(file, x))
    {

     stringstream strstr(x);
         string word = "";
         k=0;
         cargo_confere  = false;
         codigo_confere = false;
         achou_candidato = false;

         while (getline(strstr, word, ';'))
         {
            if(k == 14 && word.compare(colocar_aspas(cargo)) == 0){cargo_confere   = true; atributos.cargo = word;}
            if(k == 16 && colocar_aspas(codigo).compare(word) == 0){codigo_confere = true;}
            if(cargo_confere && codigo_confere)
            {
              achou_candidato = true;
              switch (k)
              {
                case 14:
                 atributos.cargo = word;
                case 16:
                 atributos.codigo = word;
                case 18:
                 atributos.nome = word;
                case 28:
                 atributos.sigla_partido = word;
                case 29:
                 atributos.partido = word;

              }
            }
            k++;
         }
         if(achou_candidato)
         {
           break;
         }
       }
  file.close();

  if(!cargo_confere || !codigo_confere)
  {
    atributos.validade_candidato = false;
  }
  else
  {
    atributos.validade_candidato = true;
  }

  return atributos;
}



string colocar_aspas(string texto)
{
  return "\"" + texto + "\"";
}

string tirar_aspas(string texto)
{
  texto.erase(remove( texto.begin(), texto.end(), '\"' ),
                                             texto.end());
  return texto;
}
