#include"../inc/instanciar.hpp"
#include"../inc/urna.hpp"
#include"../inc/eleitor.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include "../inc/candidato.hpp"
#include<iostream>
#include<algorithm>


separa_atributos instanciar_candidatos(string cargo, string extensao, string codigo)
{
  separa_atributos atributos;

  string arquivo = "./data/consulta_cand_2018_" + extensao + ".csv";

  ifstream file(arquivo);

  if(!file.is_open()){throw(file.is_open());}
    int k = 0;
    bool cargo_confere, codigo_confere, achou_candidato, apto_confere;
    string x, y, vice;

    while(getline(file, x))
    {

     stringstream strstr(x);
         string word = "";
         k=0;
         cargo_confere   = false;
         codigo_confere  = false;
         apto_confere    = false;
         achou_candidato = false;

         while (getline(strstr, word, ';'))
         {
            if(k == 12){atributos.nm_ue = word;}
            if(k == 14 && word.compare(colocar_aspas(cargo)) == 0){cargo_confere   = true; atributos.cargo = word;}
            if(k == 16 && colocar_aspas(codigo).compare(word) == 0){codigo_confere = true;}
            if(k == 23 && word.compare("\"INAPTO\"") != 0){apto_confere = true;}
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
           atributos.candidato_apto = apto_confere;
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

bool confirmacao()
{
  cout << "DIGITE – CONFIRMA – PARA CONFIRMAR ESTE VOTO E – CORRIGE – PARA REINICIAR ESTE VOTO" << endl;

  string opcao;
  while(true)
  {
    cin >> opcao;
    std::transform(opcao.begin(), opcao.end(),opcao.begin(), ::toupper);
    if(opcao.compare("CONFIRMA") == 0)
    {
      return true;
    }
    else if(opcao.compare("CORRIGE") == 0)
    {
      return false;
    }
    else
    {
      cout << "POR FAVOR, DIGITE APENAS OS CARACTERES ESPECIFICADOS" << endl;
    }
  }
}


opcao_voto codigo_candidato()
{
  string numero;
  opcao_voto opcao;

  while(true)
  {
    cin >> numero;
    std::transform(numero.begin(), numero.end(), numero.begin(), ::toupper);
    if (numero.compare("BRANCO") == 0)
    {
      cout << "VOTO EM BRANCO" << endl;
      opcao.branco = true;
      return opcao;
    }
    else
    {

      try
      {
        opcao.codigo = stoi(numero,nullptr,10);
        opcao.branco = false;
        return opcao;
      }

      catch(exception &e){
        cout << "APENAS NÚMEROS SÃO PERMITIDOS!" << endl;
      }
    }
  }
}

separa_atributos ler_arquivo(string cargo, string extensao, string codigo)
{
  separa_atributos atributos;
  try
  {
    atributos = instanciar_candidatos(cargo, extensao, codigo);
  }
  catch(bool e)
  {
    cout << "ERRO AO ABRIR ARQUIVO" << endl;
  }
  return atributos;
}
