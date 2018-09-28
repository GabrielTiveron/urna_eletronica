#include<iostream>
#include"../inc/eleitor.hpp"
#include"../inc/instanciar.hpp"

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

string Eleitor::get_nome()
{
  return nome;
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

void Eleitor::relatorio_votos()
{
  cout << "NOME: " << this->get_nome() << endl;
  cout << "DEPUTADO FEDERAL: " << this->get_candidato_federal().conferir_estado() << endl;
  cout << "DEPUTADO DISTRITAL: " << this->get_candidato_distrital().conferir_estado() << endl;
  cout << "SENADOR: " << this->get_senador_1().conferir_estado() << endl;
  cout << "SENADOR 2˚ OPÇÃO: " << this->get_senador_2().conferir_estado() << endl;
  cout << "GOVERNADOR: " << this->get_governador().conferir_estado() << endl;
  cout << "PRESIDENTE: " << this->get_presidentes().conferir_estado() << endl;
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
}
