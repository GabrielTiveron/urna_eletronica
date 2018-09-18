#ifndef CAND_BR_HPP
#define CAND_BR_HPP

#include<iostream>
#include<string>

using namespace std;

class Candidato_BR
{


  private:

    string DS_CARGO;
    string NR_CANDIDATO;
    string NM_URNA_CANDIDATO;
    string SG_PARTIDO;
    string NM_PARTIDO;
    int votos;


  public:

    Candidato_BR();
    ~Candidato_BR();

    void set_DS_CARGO(string DS_CARGO);
    void set_NR_CANDIDATO(string NR_CANDIDATO);
    void set_NM_URNA_CANDIDATO(string NM_URNA_CANDIDATO);
    void set_SG_PARTIDO(string SG_PARTIDO);
    void set_NM_PARTIDO(string NM_PARTIDO);
    void Voto();

    string get_DS_CARGO();
    string get_NR_CANDIDATO();
    string get_NM_URNA_CANDIDATO();
    string get_SG_PARTIDO();
    string get_NM_PARTIDO();
    int get_Votos();

};



#endif
