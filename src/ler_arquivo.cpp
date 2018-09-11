#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include "cand_BR.hpp"
#define NUM_COLUNAS 3
#define MAX_CANDIDATOS 27

void desc_CANDIDATO(string NM_CANDIDATO, Candidato_BR Candidatos[]);


Candidato_BR Candidatos[MAX_CANDIDATOS];

using namespace std;



int main(int argc, char const *argv[]) {

  int k = 0, i = 0;
  string x, y;



   ifstream file("data_consulta_cand_2018_BR.csv");

  while(getline(file, x))
  {
    stringstream strstr(x);
        string word = "";
        k=0;
        while (getline(strstr, word, ';'))
        {
           switch (k)
           {
             case 0:
              Candidatos[i].set_DT_GERACAO(word);
             case 1:
              Candidatos[i].set_HH_GERACAO(word);
             case 2:
              Candidatos[i].set_ANO_ELEICAO(word);
             case 3:
              Candidatos[i].set_CD_TIPO_ELEICAO(word);
             case 4:
              Candidatos[i].set_NM_TIPO_ELEICAO(word);
             case 5:
              Candidatos[i].set_NR_TURNO(word);
             case 6:
              Candidatos[i].set_CD_ELEICAO(word);
             case 7:
              Candidatos[i].set_DS_ELEICAO(word);
             case 8:
              Candidatos[i].set_DT_ELEICAO(word);
             case 9:
              Candidatos[i].set_TP_ABRANGENCIA(word);
             case 10:
              Candidatos[i].set_SG_UF(word);
             case 11:
              Candidatos[i].set_SG_UE(word);
             case 12:
              Candidatos[i].set_NM_UE(word);
             case 13:
              Candidatos[i].set_CD_CARGO(word);
             case 14:
              Candidatos[i].set_DS_CARGO(word);
             case 15:
              Candidatos[i].set_SQ_CANDIDATO(word);
             case 16:
              Candidatos[i].set_NR_CANDIDATO(word);
             case 17:
              Candidatos[i].set_NM_CANDIDATO(word);
             case 18:
              Candidatos[i].set_NM_URNA_CANDIDATO(word);
             case 19:
              Candidatos[i].set_NM_SOCIAL_CANDIDATO(word);
             case 20:
              Candidatos[i].set_NR_CPF_CANDIDATO(word);
             case 21:
              Candidatos[i].set_NM_EMAIL(word);
             case 22:
              Candidatos[i].set_CD_SITUACAO_CANDIDATURA(word);
             case 23:
              Candidatos[i].set_DS_SITUACAO_CANDIDATURA(word);
             case 24:
              Candidatos[i].set_CD_DETALHE_SITUACAO_CAND(word);
             case 25:
              Candidatos[i].set_DS_DETALHE_SITUACAO_CAND(word);
             case 26:
              Candidatos[i].set_TP_AGREMIACAO(word);
             case 27:
              Candidatos[i].set_NR_PARTIDO(word);
             case 28:
              Candidatos[i].set_SG_PARTIDO(word);
             case 29:
              Candidatos[i].set_NM_PARTIDO(word);
             case 30:
              Candidatos[i].set_SQ_COLIGACAO(word);
             case 31:
              Candidatos[i].set_NM_COLIGACAO(word);
             case 32:
              Candidatos[i].set_DS_COMPOSICAO_COLIGACAO(word);
             case 33:
              Candidatos[i].set_CD_NACIONALIDADE(word);
             case 34:
              Candidatos[i].set_DS_NACIONALIDADE(word);
             case 35:
              Candidatos[i].set_SG_UF_NASCIMENTO(word);
             case 36:
              Candidatos[i].set_CD_MUNICIPIO_NASCIMENTO(word);
             case 37:
              Candidatos[i].set_NM_MUNICIPIO_NASCIMENTO(word);
             case 38:
              Candidatos[i].set_DT_NASCIMENTO(word);
             case 39:
              Candidatos[i].set_NR_IDADE_DATA_POSSE(word);
             case 40:
              Candidatos[i].set_NR_TITULO_ELEITORAL_CANDIDATO(word);
             case 41:
              Candidatos[i].set_CD_GENERO(word);
             case 42:
              Candidatos[i].set_DS_GENERO(word);
             case 43:
              Candidatos[i].set_CD_GRAU_INSTRUCAO(word);
             case 44:
              Candidatos[i].set_DS_GRAU_INSTRUCAO(word);
             case 45:
              Candidatos[i].set_CD_ESTADO_CIVIL(word);
             case 46:
              Candidatos[i].set_DS_ESTADO_CIVIL(word);
             case 47:
              Candidatos[i].set_CD_COR_RACA(word);
             case 48:
              Candidatos[i].set_DS_COR_RACA(word);
             case 49:
              Candidatos[i].set_CD_OCUPACAO(word);
             case 50:
              Candidatos[i].set_DS_OCUPACAO(word);
             case 51:
              Candidatos[i].set_NR_DESPESA_MAX_CAMPANHA(word);
             case 52:
              Candidatos[i].set_CD_SIT_TOT_TURNO(word);
             case 53:
              Candidatos[i].set_DS_SIT_TOT_TURNO(word);
             case 54:
              Candidatos[i].set_ST_REELEICAO(word);
             case 55:
              Candidatos[i].set_ST_DECLARAR_BENS(word);
             case 56:
              Candidatos[i].set_NR_PROTOCOLO_CANDIDATURA(word);
             case 57:
              Candidatos[i].set_NR_PROCESSO(word);
           }
           k++;
        }
        i++;
  }
  file.close();

  string a;

  cin >> a;

  desc_CANDIDATO(a, Candidatos);

  return 0;
}







void desc_CANDIDATO(string NM_CANDIDATO, Candidato_BR Candidatos[])
{
  string aux = "\"" + NM_CANDIDATO + "\"";

  int i, cand, contador = 0;

  for(i = 0; i < MAX_CANDIDATOS; i++)
  {
    if(Candidatos[i].get_NR_CANDIDATO() == aux)
    {
      if(contador == 1 && Candidatos[i].get_NR_CANDIDATO() == aux)
      {
        break;
      }
      cand = i;
      contador++;
    }
  }

  cout << Candidatos[i].get_NM_CANDIDATO() << "\t" << Candidatos[i].get_NM_PARTIDO() << endl;
  cout << Candidatos[cand].get_NM_CANDIDATO() << "\t" << Candidatos[cand].get_NM_PARTIDO()  << endl;

}
