#include"../inc/instanciar.hpp"
#include"../inc/urna.hpp"
#include"../inc/eleitor.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include "../inc/candidato.hpp"
#include<iostream>


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
         if(achou_candidato && apto_confere)
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

bool confirmacao()
{
  cout << "DIGITE – CONFIRMA – PARA CONFIRMAR ESTE VOTO E – CORRIGE – PARA REINICIAR ESTE VOTO" << endl;

  string opcao;
  while(true)
  {
    cin >> opcao;
    transform(opcao.begin(), opcao.end(),opcao.begin(), ::toupper);
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
    transform(numero.begin(), numero.end(), numero.begin(), ::toupper);
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

void computar_votos(Eleitor eleitores[])
{
  int quantidade_eleitores;

  quantidade_eleitores = sizeof(Eleitor) / sizeof(eleitores);

  Candidato deputado_federal[quantidade_eleitores];
  Candidato deputado_distrital[quantidade_eleitores];
  Senador senadores_votados[quantidade_eleitores * 2];
  Governador governadores_votados[quantidade_eleitores];
  Presidente presidentes_votados[quantidade_eleitores];


  for(int i = 0; i < quantidade_eleitores; i++)
  {
    deputado_federal[i]                       = eleitores[i].get_candidato_federal();
    deputado_distrital[i]                     = eleitores[i].get_candidato_distrital();
    senadores_votados[i]                      = eleitores[i].get_senador_1();
    //senadores_votados[2*quantidade_eleitores-i] = eleitores[i].get_senador_2();
    governadores_votados[i]                   = eleitores[i].get_governador();
    presidentes_votados[i]                    = eleitores[i].get_presidentes();
  }

  int qtd_dep_fed,
      qtd_dep_dist,
      qtd_sen,
      qtd_gov,
      qtd_pres;

  for (int j = 0; j < quantidade_eleitores; j++)
  {
    qtd_dep_fed = 0;
    qtd_dep_dist = 0;
    qtd_sen = 0;
    qtd_gov = 0;
    qtd_pres = 0;
    //comparar membros para não deixar candidatos repetidos;
    for (int t = j; t > 0; t--)
    {
      if(deputado_federal[j].get_codigo().compare(deputado_federal[t].get_codigo()) == 0)
      {delete deputado_federal[t];qtd_dep_fed++;}

      if(deputado_distrital[j].get_codigo().compare(deputado_federal[t].get_codigo()) == 0)
      {delete deputado_federal[t]; qtd_dep_dist++;}

      //if(senadores_votados[j] == senadores_votados[2*quantidade_eleitores - t]){delete senadores_votados; qtd_sen++;}

      if(governadores_votados[j].get_codigo().compare(governadores_votados[t].get_codigo()) == 0)
      {delete governadores_votados[t]; qtd_gov++;}

      if(presidentes_votados[j].get_codigo().compare(presidentes_votados[t].get_codigo()) == 0)
      {delete presidentes_votados[t]; qtd_pres++;}
    }
    deputado_federal[j].voto_confirmado(qtd_dep_fed);
    deputado_distrital[j].voto_confirmado(qtd_dep_dist);
    //senadores_votados[j].voto_confirmado(qtd_sen);
    governadores_votados[j].voto_confirmado(qtd_gov);
    presidentes_votados[j].voto_confirmado(qtd_pres);
  }

  cout << presidente[0].get_votos() << endl;
}
