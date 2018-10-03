#include"../inc/governador.hpp"
#include"../inc/instanciar.hpp"
#include<iostream>

Governador::Governador()
{
}

Governador::~Governador()
{

}

void Governador::set_vice_governador(string vice_governador)
{
  this->vice_governador = vice_governador;
}

string Governador::get_vice_governador()
{
  return vice_governador;
}

void Governador::mostrar_dados()
{
  cout << "NOME: " << tirar_aspas(this->get_nome()) << endl;
  cout << "CARGO: " << tirar_aspas(this->get_cargo()) << endl;
  cout << "VICE-GOVERNADOR: " << tirar_aspas(this->get_vice_governador()) << endl;
  cout << "NM UE: " << tirar_aspas(this->get_nm_ue()) << endl;
  cout << "PARTIDO: " << tirar_aspas(this->get_sigla_partido()) << " – " << tirar_aspas(this->get_partido()) << endl;
}
