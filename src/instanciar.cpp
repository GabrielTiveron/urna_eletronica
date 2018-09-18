#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include "../inc/cand_BR.hpp"
#include"../inc/instanciar.hpp"
#define NM_UE 12
#define NM_URNA_CANDIDATO 18
#define NM_PARTIDO 29
#define DS_CARGO 14
#define NR_CANDIDATO 16
#define MAX_CANDIDATOS 1240
#define TIPO_CAND bool
#define SG_PARTIDO 28

using namespace std;



void Instanciar_BR(Candidato_BR Candidatos[], TIPO_CAND BR) {

  int k = 0, i = 0;
  string x, y;


if(BR){
   ifstream file("../data/consulta_cand_2018_BR.csv");

  while(getline(file, x))
  {
    stringstream strstr(x);
        string word = "";
        k=0;
        while (getline(strstr, word, ';'))
        {
           switch (k)
           {
             case DS_CARGO:
              Candidatos[i].set_DS_CARGO(word);
             case NR_CANDIDATO:
              Candidatos[i].set_NR_CANDIDATO(word);
             case NM_URNA_CANDIDATO:
              Candidatos[i].set_NM_URNA_CANDIDATO(word);
             case SG_PARTIDO:
              Candidatos[i].set_SG_PARTIDO(word);
             case NM_PARTIDO:
              Candidatos[i].set_NM_PARTIDO(word);

           }
           k++;
        }
        i++;
  }
  file.close();
}else
{
  ifstream file("../data/consulta_cand_2018_DF.csv");

   while(getline(file, x))
   {
     stringstream strstr(x);
         string word = "";
         k=0;
         while (getline(strstr, word, ';'))
         {
            switch (k)
            {
              case DS_CARGO:
               Candidatos[i].set_DS_CARGO(word);
              case NR_CANDIDATO:
               Candidatos[i].set_NR_CANDIDATO(word);
              case NM_URNA_CANDIDATO:
               Candidatos[i].set_NM_URNA_CANDIDATO(word);
              case SG_PARTIDO:
               Candidatos[i].set_SG_PARTIDO(word);
              case NM_PARTIDO:
               Candidatos[i].set_NM_PARTIDO(word);
            }
            k++;
         }
         i++;
   }
 file.close();
  }

}


Validar validar_CANDIDATO(string NRCANDIDATO, Candidato_BR Candidatos[], string CARGO, int NMR_CAND)
{
  string aux = colocar_aspas(NRCANDIDATO);
  CARGO = colocar_aspas(CARGO);
  Validar validade_do_candidato;


  for(int i = 0; i < NMR_CAND; i++)
  {
    if(Candidatos[i].get_NR_CANDIDATO() == aux && Candidatos[i].get_DS_CARGO().compare(CARGO) == 0)
    {
      validade_do_candidato.valido = true;
      validade_do_candidato.numero = i;
    }
  }
  validade_do_candidato.valido = false;
  return validade_do_candidato;
}

string colocar_aspas(string texto)
{
  return "\"" + texto + "\"";
}
