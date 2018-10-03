#include <iostream>
#include <cstdlib>
#include<vector>
#include "../inc/candidato.hpp"
#include "../inc/instanciar.hpp"
#include"../inc/urna.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include"../inc/eleitor.hpp"
#include"../inc/apuravotos.hpp"
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
  vector<Candidato> deputado_fed;
  vector<Candidato> deputado_dist;
  vector<Senador>   senador;
  vector<Governador> governador;
  vector<Presidente> presidente;
  string nome;


  for(int i = 0; i < numero_eleitores.codigo; i++)
  {
    cout << "INSTRUÇÕES: PARA A VOTAÇÃO NO CANDIDATO DESEJADO, APÓS PEDIDO O CÓDIGO DO MESMO, DIGITE-O. CASO QUEIRA VOTAR EM BRANCO, DIGITE – BRANCO NO LUGAR DO CÓDIGO" << endl;
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

    deputado_fed.push_back(eleitores[i].get_candidato_federal());
    deputado_dist.push_back(eleitores[i].get_candidato_distrital());
    senador.push_back(eleitores[i].get_senador_1());
    senador.push_back(eleitores[i].get_senador_2());
    governador.push_back(eleitores[i].get_governador());
    presidente.push_back(eleitores[i].get_presidentes());
  }

  for(int i = 0; i < numero_eleitores.codigo; i++)
  {
    eleitores[i].relatorio_votos();
  }

  mostrar_vencedores(presidente, governador, senador, deputado_fed, deputado_dist);

    return 0;
}
