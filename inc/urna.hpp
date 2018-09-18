#ifndef URNA_HPP
#define URNA_HPP

#include<iostream>
#include<string>
#include "../inc/cand_BR.hpp"

using namespace std;

Candidato_BR Interacao_Dep_Fed(Candidato_BR Candidatos[]);
Candidato_BR Interacao_Dep_Dist(Candidato_BR Candidatos[]);
Candidato_BR Interacao_Sen(Candidato_BR Candidatos[]);
Candidato_BR Interacao_Gov(Candidato_BR Candidatos[]);
Candidato_BR Interacao_Pres(Candidato_BR Candidatos[]);
void Interacao_Fim();


#endif
