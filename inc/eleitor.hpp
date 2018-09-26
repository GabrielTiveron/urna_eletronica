#ifndef ELEITOR_HPP
#define ELEITOR_HPP

#include<string>
#include"../inc/candidato.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/presidente.hpp"

using namespace std;


class Eleitor
{
private:

  string        nome;
  Candidato     federal;
  Candidato     distrital;
  Senador       senador_1;
  Senador       senador_2;
  Governador    governador;
  Presidente    presidente;

public:

  Eleitor();
  ~Eleitor();
  void set_nome(string nome);
  void set_candidato_federal(Candidato federal);
  void set_candidato_distrital(Candidato distrital);
  void set_senador_1(Senador senador_1);
  void set_senador_2(Senador senador_2);
  void set_governador(Governador governador);
  void set_presidente(Presidente presidente);

  Candidato get_candidato_federal();
  Candidato get_candidato_distrital();
  Senador get_senador_1();
  Senador get_senador_2();
  Governador get_governador();
  Presidente get_presidentes();

};



#endif
