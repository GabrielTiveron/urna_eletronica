#include"../inc/presidente.hpp"
#include"../inc/instanciar.hpp"

Presidente::Presidente()
{
  set_cargo("\"PRESIDENTE\"");
}

Presidente::~Presidente()
{

}

void Presidente::set_vice_presidente(string vice_presidente)
{
  this->vice_presidente = vice_presidente;
}

string Presidente::get_vice_presidente()
{
  return vice_presidente;
}

void Presidente::mostrar_dados()
{
  cout << "NOME: " << tirar_aspas(this->get_nome()) << endl;
  cout << "CARGO: " << tirar_aspas(this->get_cargo()) << endl;
  cout << "VICE-PRESIDENTE: " << tirar_aspas(this->get_vice_presidente()) << endl;
  cout << "PARTIDO: " << tirar_aspas(this->get_sigla_partido()) << " – " << tirar_aspas(this->get_partido()) << endl;
}
