#ifndef URNA_HPP
#define URNA_HPP

#include<iostream>
#include<string>
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"
#include "../inc/candidato.hpp"

using namespace std;

typedef struct opcao_voto
{
  bool branco;
  int codigo;
}opcao_voto;

Candidato   interacao_dep         (string cargo, string extensao);
Senador     interacao_senador     (string cargo, string extensao);
Governador  interacao_governador  (Governador gov[]);
Presidente  interacao_presidente  (Presidente presidente[]);
opcao_voto         codigo_candidato      ();
bool        confirmacao ();


#endif
