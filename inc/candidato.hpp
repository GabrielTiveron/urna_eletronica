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
  bool   validade_candidato;
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
  bool      candidato_nulo;
  bool      candidato_branco;

public:

  Candidato();
  Candidato(string cargo);
  ~Candidato();

  void set_nome             (string nome);
  void set_cargo            (string cargo);
  void set_partido          (string partido);
  void set_sigla_partido    (string sigla_partido);
  void set_codigo           (string codigo);
  void set_candidato_nulo   (bool nulo);
  void set_candidato_branco (bool branco);

  string get_nome();
  string get_cargo();
  string get_partido();
  string get_sigla_partido();
  string get_codigo();
  int    get_votos();
  bool   get_candidato_nulo();
  bool   get_candidato_branco();

  void    distribuir_atributos  (separa_atributos atributos);
  void    mostrar_dados         ();
  void    voto_confirmado       (int qtd);

};


#endif
