#include"../inc/senador.hpp"
#include"../inc/instanciar.hpp"


Senador::Senador()
{
}

Senador::Senador(bool primeiro_senador)
{
  this->primeiro_senador = primeiro_senador;
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
