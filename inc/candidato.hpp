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
  string nm_ue;
  bool   validade_candidato;
  bool   candidato_apto;
}separa_atributos;


class Candidato
{

private:

  string    nome;
  string    cargo;
  string    partido;
  string    sigla_partido;
  string    codigo;
  string    nm_ue;
  int       votos;
  bool      candidato_nulo;
  bool      candidato_branco;

public:

  Candidato();
  ~Candidato();

  void set_nome             (string nome);
  void set_cargo            (string cargo);
  void set_partido          (string partido);
  void set_sigla_partido    (string sigla_partido);
  void set_codigo           (string codigo);
  void set_nm_ue            (string nm_ue);
  void set_candidato_nulo   (bool nulo);
  void set_candidato_branco (bool branco);
  void set_voto             ();
  void incrementa_voto      ();

  string get_nome             ();
  string get_cargo            ();
  string get_partido          ();
  string get_sigla_partido    ();
  string get_codigo           ();
  string get_nm_ue            ();
  bool   get_candidato_nulo   ();
  bool   get_candidato_branco ();
  int    get_votos            ();

  void    distribuir_atributos  (separa_atributos atributos);
  void    mostrar_dados         ();
  string  conferir_estado       ();


};


#endif
