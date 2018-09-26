#ifndef SENADOR_HPP
#define SENADOR_HPP

#define MAX_SENADOR 23
#include<string>
#include<iostream>
#include"../inc/candidato.hpp"

using namespace std;


class Senador: public Candidato
{
private:

  string    suplente_1;
  string    suplente_2;
  bool      primeiro_senador;

public:

  Senador();
  Senador(bool primeiro_senador);
  ~Senador();

  void set_suplente_1(string suplente_1);
  void set_suplente_2(string suplente_2);

  string get_suplente_1();
  string get_suplente_2();

  void mostrar_dados();


};


#endif
