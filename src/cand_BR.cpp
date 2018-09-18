#include "../inc/cand_BR.hpp"



Candidato_BR::Candidato_BR(){votos = 0;};
Candidato_BR::~Candidato_BR(){};


//Inicio Setters
void Candidato_BR::set_DS_CARGO(string DS_CARGO)
{
  this->DS_CARGO = DS_CARGO;
}

void Candidato_BR::set_NR_CANDIDATO(string NR_CANDIDATO)
{
  this->NR_CANDIDATO = NR_CANDIDATO;
}

void Candidato_BR::set_NM_URNA_CANDIDATO(string NM_URNA_CANDIDATO)
{
  this->NM_URNA_CANDIDATO = NM_URNA_CANDIDATO;
}

void Candidato_BR::set_SG_PARTIDO(string SG_PARTIDO)
{
  this->SG_PARTIDO = SG_PARTIDO;
}

void Candidato_BR::set_NM_PARTIDO(string NM_PARTIDO)
{
  this->NM_PARTIDO = NM_PARTIDO;
}
//Final Setters

void Candidato_BR::Voto()
{
  votos++;
}




//Inicio Getters
string Candidato_BR::get_DS_CARGO()
{
  return DS_CARGO;
}

string Candidato_BR::get_NR_CANDIDATO()
{
  return NR_CANDIDATO;
}

string Candidato_BR::get_NM_URNA_CANDIDATO()
{
  return NM_URNA_CANDIDATO;
}

string Candidato_BR::get_SG_PARTIDO()
{
  return SG_PARTIDO;
}

string Candidato_BR::get_NM_PARTIDO()
{
  return NM_PARTIDO;
}

int Candidato_BR::get_Votos()
{
  return votos;
}
