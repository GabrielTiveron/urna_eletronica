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
#define df "DF"


using namespace std;


int main()
{

  cout << "QUANTOS ELEITORES IRÃO VOTAR?" << endl;
  int numero_eleitores = codigo_candidato();


  Eleitor eleitores[numero_eleitores];
  string nome;

  for(int i = 0; i < numero_eleitores; i++)
  {
    //eleitores[i].set_nome(cin >> nome);
    eleitores[i].set_candidato_federal(interacao_dep(dep_fed, df));
    eleitores[i].set_candidato_distrital(interacao_dep(dep_dist, df));
    eleitores[i].set_senador(interacao_senador(sen, df));
  }


    return 0;
}
