#include <iostream>
#include "../inc/cand_BR.hpp"
#include "../inc/instanciar.hpp"
#include"../inc/urna.hpp"
#define MAX_CANDIDATOS_DF 1240
#define MAX_CANDIDATOS_BR 27

using namespace std;


Candidato_BR Candidatos[MAX_CANDIDATOS_DF];
Candidato_BR Candidato[MAX_CANDIDATOS_BR];

int main()
{
  Instanciar_BR(Candidatos, false);
  Instanciar_BR(Candidato, true);
    cout << "Quantos são os eleitores?" << endl;

    int nr_eleitor;

    cin >> nr_eleitor;

    Candidato_BR Votados[nr_eleitor][5];


    //Interações com os eleitores

     for(int i = 0; i < nr_eleitor; i++)
     {
        Votados[i][0] = Interacao_Dep_Fed(Candidatos);
        Votados[i][1] = Interacao_Dep_Dist(Candidatos);
        Votados[i][2] = Interacao_Sen(Candidatos);
        Votados[i][3] = Interacao_Gov(Candidatos);
        Votados[i][4] = Interacao_Pres(Candidato);
        // Interacao_Fim();
     }

    // cout << "Os candidatos mais votados foram: " << endl;
    // for(int i = 0; i < nr_eleitor; i++)
    // {
    //   cout << Votados[i][1].get_NM_URNA_CANDIDATO() << endl;
    //   cout << Votados[i][2].get_NM_URNA_CANDIDATO() << endl;
    //   cout << Votados[i][3].get_NM_URNA_CANDIDATO() << endl;
    //
    // }

    return 0;
}
