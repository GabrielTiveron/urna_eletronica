#include<iostream>
#include"../inc/eleitor.hpp"

Eleitor::Eleitor(){}

Eleitor::~Eleitor(){}

void Eleitor::set_nome(string nome)
{
  this->nome = nome;
}
void Eleitor::set_candidato_federal(Candidato federal)
{
  this->federal = federal;
}
void Eleitor::set_candidato_distrital(Candidato distrital)
{
  this->distrital = distrital;
}
void Eleitor::set_senador(Senador senador_1)
{
  this->senador_1 = senador_1;
}
void Eleitor::set_senador(Senador senador_2, bool difere_senadores)
{
  this->senador_2 = senador_2;
}
void Eleitor::set_governador(Governador governador)
{
  this->governador = governador;
}
void Eleitor::set_presidente(Presidente presidente)
{
  this->presidente = presidente;
}

Candidato Eleitor::get_candidato_federal()
{
  return federal;
}
Candidato Eleitor::get_candidato_distrital()
{
  return distrital;
}
Senador Eleitor::get_senador_1()
{
  return senador_1;
}
Senador Eleitor::get_senador_2()
{
  return senador_2;
}
Governador Eleitor::get_governador()
{
  return governador;
}
Presidente Eleitor::get_presidentes()
{
  return presidente;
}
