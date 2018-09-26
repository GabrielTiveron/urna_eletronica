#include"../inc/governador.hpp"
#include"../inc/instanciar.hpp"

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
