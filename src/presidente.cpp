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

string Presidente::get_vice_presidente(string vice_presidente)
{
  return vice_presidente;
}
