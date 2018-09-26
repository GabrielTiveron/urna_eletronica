#ifndef  CANDIDATO_HPP
#define  CANDIDATO_HPP

#include<string>
using namespace std;

typedef struct validacao
{
  int numero;
  bool valido;
}Validar;

typedef struct separa_atributos
{
  string nome;
  string codigo;
  string partido;
  string sigla_partido;
  string cargo;
}separa_atributos;


class Candidato
{

private:

  string    nome;
  int       votos;
  string    cargo;
  string    partido;
  string    sigla_partido;
  string    codigo;

public:

  Candidato();
  Candidato(string cargo);
  ~Candidato();

  void set_nome           (string nome);
  void set_cargo          (string cargo);
  void set_partido        (string partido);
  void set_sigla_partido  (string sigla_partido);
  void set_codigo         (string codigo);

  string get_nome();
  string get_cargo();
  string get_partido();
  string get_sigla_partido();
  string get_codigo();
  int get_votos();

  void    distribuir_atributos  (separa_atributos atributos);
  void    mostrar_dados         ();
  void    voto_confirmado       ();

};


#endif
