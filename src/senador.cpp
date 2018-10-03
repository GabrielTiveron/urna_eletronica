#include"../inc/senador.hpp"
#include"../inc/instanciar.hpp"


Senador::Senador()
{
}

Senador::~Senador()
{

}

void Senador::set_suplente_1(string suplente_1)
{
  this->suplente_1 = suplente_1;
}
void Senador::set_suplente_2(string suplente_2)
{
  this->suplente_2 = suplente_2;
}

string Senador::get_suplente_1()
{
  return suplente_1;
}
string Senador::get_suplente_2()
{
  return suplente_2;
}

void Senador::mostrar_dados()
{
  cout << "NOME: " << tirar_aspas(this->get_nome()) << endl;
  cout << "CARGO: " << tirar_aspas(this->get_cargo()) << endl;
  cout << "1º SUPLENTE: " << tirar_aspas(this->get_suplente_1()) << endl;
  cout << "2º SUPLENTE: " << tirar_aspas(this->get_suplente_2()) << endl;
  cout << "NM UE: " << tirar_aspas(this->get_nm_ue()) << endl;
  cout << "PARTIDO: " << tirar_aspas(this->get_sigla_partido()) << " – " << tirar_aspas(this->get_partido()) << endl;
}
