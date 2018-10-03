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
Senador     interacao_senador     (string cargo, string extensao, Senador senador_1);
Governador  interacao_governador  (string cargo, string extensao);
Presidente  interacao_presidente  (string cargo, string extensao);
bool        confirma_voto         ();


#endif
