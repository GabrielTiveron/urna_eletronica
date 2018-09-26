#ifndef URNA_HPP
#define URNA_HPP

#include<iostream>
#include<string>
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include "../inc/candidato.hpp"

using namespace std;

Candidato   interacao_dep         (string cargo, string extensao);
Senador     interacao_senador     (string cargo, string extensao);
Governador  interacao_governador  (Governador gov[]);
Presidente  interacao_presidente  (Presidente presidente[]);
int         codigo_candidato      ();
bool        confirmacao ();


#endif
