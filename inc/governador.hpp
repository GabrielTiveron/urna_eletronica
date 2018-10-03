#ifndef GOVERNADOR_HPP
#define GOVERNADOR_HPP

#define MAX_GOVERNADOR 23
#include<string>
#include"../inc/candidato.hpp"

using namespace std;


class Governador: public Candidato
{
private:

  string vice_governador;

public:

  Governador  ();
  ~Governador ();

  void   set_vice_governador  (string vice_governador);

  string get_vice_governador  ();

  void   mostrar_dados        ();

};



#endif
