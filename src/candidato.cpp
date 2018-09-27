#include"../inc/candidato.hpp"
#include"../inc/instanciar.hpp"
#include<string>
#include<iostream>

using namespace std;

Candidato::Candidato()
{
  votos = 0;
}

Candidato::Candidato(string cargo)
{
  this->cargo = "\"" + cargo + "\"";
}

Candidato::~Candidato()
{

}

void Candidato::set_nome(string nome)
{
  this->nome = nome;
}
void Candidato::set_cargo(string cargo)
{
  this->cargo = cargo;
}
void Candidato::set_partido(string partido)
{
  this->partido = partido;
}
void Candidato::set_sigla_partido(string sigla_partido)
{
this->sigla_partido = sigla_partido;
}
void Candidato::set_codigo(string codigo)
{
  this->codigo = codigo;
}

void Candidato::set_candidato_nulo(bool nulo)
{
  this->candidato_nulo = nulo;
}

void Candidato::set_candidato_branco(bool branco)
{
  this->candidato_branco = branco;
}

string Candidato::get_nome()
{
  return nome;
}
string Candidato::get_cargo()
{
  return cargo;
}
string Candidato::get_partido()
{
  return partido;
}
string Candidato::get_sigla_partido()
{
  return sigla_partido;
}
string Candidato::get_codigo()
{
  return codigo;
}
int Candidato::get_votos()
{
  return votos;
}

bool Candidato::get_candidato_nulo()
{
  return candidato_nulo;
}

bool Candidato::get_candidato_branco()
{
  return candidato_branco;
}

void Candidato::distribuir_atributos(separa_atributos atributos)
{
  this->set_nome          (atributos.nome);
  this->set_cargo         (atributos.cargo);
  this->set_codigo        (atributos.codigo);
  this->set_partido       (atributos.partido);
  this->set_sigla_partido (atributos.sigla_partido);
}

void Candidato::mostrar_dados()
{
  cout << "NOME: " << tirar_aspas(this->get_nome()) << endl;
  cout << "CARGO: " << tirar_aspas(this->get_cargo()) << endl;
  cout << "PARTIDO: " << tirar_aspas(this->get_sigla_partido()) << " – " << tirar_aspas(this->get_partido()) << endl;
}

void Candidato::voto_confirmado(int qtd)
{
  this->votos = qtd;
}
