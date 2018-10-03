#ifndef PRESIDENTE_HPP
#define PRESIDENTE_HPP

#define MAX_PRESIDENTE 13
#include<string>
#include"../inc/candidato.hpp"

using namespace std;


class Presidente: public Candidato
{
private:

  string vice_presidente;

public:

  Presidente();
  ~Presidente();

  void      set_vice_presidente    (string vice_presidente);

  string    get_vice_presidente    ();

  void      mostrar_dados          ();

};





#endif
