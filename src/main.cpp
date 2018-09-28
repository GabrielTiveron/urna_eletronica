#include <iostream>
#include "../inc/candidato.hpp"
#include "../inc/instanciar.hpp"
#include"../inc/urna.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include"../inc/eleitor.hpp"
#define dep_fed "DEPUTADO FEDERAL"
#define dep_dist "DEPUTADO DISTRITAL"
#define sen "SENADOR"
#define gov "GOVERNADOR"
#define pres "PRESIDENTE"
#define br "BR"
#define df "DF"


using namespace std;


int main()
{
  system("clear");

  cout << "QUANTOS ELEITORES IRÃO VOTAR?" << endl;
  opcao_voto numero_eleitores = codigo_candidato();


  Eleitor eleitores[numero_eleitores.codigo];
  string nome;

  for(int i = 0; i < numero_eleitores.codigo; i++)
  {
    cout << "DIGITE SEU NOME: ";
    cin >> nome;
    eleitores[i].set_nome(nome);
    system("clear");
    eleitores[i].set_candidato_federal(interacao_dep(dep_fed, df));
    eleitores[i].set_candidato_distrital(interacao_dep(dep_dist, df));
    eleitores[i].set_senador(interacao_senador(sen, df));
    eleitores[i].set_senador(interacao_senador(sen, df, eleitores[i].get_senador_1()), true);
    eleitores[i].set_governador(interacao_governador(gov, df));
    eleitores[i].set_presidente(interacao_presidente(pres, br));
  }

  for(int j = 0; j < numero_eleitores.codigo; j++)
  {
    eleitores[j].relatorio_votos();
  }


    return 0;
}
