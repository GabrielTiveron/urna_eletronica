#include"../inc/urna.hpp"
#include"../inc/instanciar.hpp"
#include "../inc/cand_BR.hpp"
#define MAX_CANDIDATOS_BR 27
#define MAX_CANDIDATOS_DF 1240

//if numero não encontrado voto = NULO
//if senador == repetido voto = NULO


Candidato_BR Interacao_Dep_Fed(Candidato_BR Candidatos[1240])
{
  string numero;
  Validar validade_do_candidato;
  //if DS_CARGO
  //NM_URNA_CANDIDATO
  //NR_CANDIDATO
  //SG_PARTIDO && NM_PARTIDO

  cout << "DEPUTADO FEDERAL: " << endl << "INSIRA O NÚMERO DO SEU CANDIDATO A DEPUTADO FEDERAL: ";

  cin >> numero;

  validade_do_candidato = validar_CANDIDATO(numero, Candidatos, "DEPUTADO FEDERAL", MAX_CANDIDATOS_DF);

  while(validade_do_candidato.valido)
  {
    cout << endl << "NÚMERO INVÁLIDO, DIGITE NOVAMENTE: ";
    cin >> numero;
  }

  int i = validade_do_candidato.numero;

  cout << "CANDIDATO ESCOLHIDO: " << endl;
  cout << "NOME: " << Candidatos[i].get_NM_URNA_CANDIDATO() << endl;
  cout << "CARGO: " << Candidatos[i].get_DS_CARGO() << endl;
  cout << "PARTIDO: " << Candidatos[i].get_SG_PARTIDO() << " - " << Candidatos[i].get_NM_PARTIDO() << endl;

  cout << "CONFIRMA [CM]   CORRIGE[CR]    ANULA[AN]" << endl;


  cout << endl << endl << endl;

  return Candidatos[i];

}

Candidato_BR Interacao_Dep_Dist(Candidato_BR Candidatos[])
{
  string numero;
  Validar validade_do_candidato;
  //if DS_CARGO
  //NM_URNA_CANDIDATO
  //NR_CANDIDATO
  //SG_PARTIDO && NM_PARTIDO

  cout << "DEPUTADO DISTRITAL: " << endl << "INSIRA O NÚMERO DO SEU CANDIDATO A DEPUTADO DISTRITAL: ";

  cin >> numero;

  validade_do_candidato = validar_CANDIDATO(numero, Candidatos, "DEPUTADO DISTRITAL", MAX_CANDIDATOS_DF);

  while(validade_do_candidato.valido)
  {
    cout << endl << "NÚMERO INVÁLIDO, DIGITE NOVAMENTE: ";
    cin >> numero;
  }

  int i = validade_do_candidato.numero;

  cout << "CANDIDATO ESCOLHIDO: " << endl;
  cout << "NOME: " << Candidatos[i].get_NM_URNA_CANDIDATO() << endl;
  cout << "CARGO: " << Candidatos[i].get_DS_CARGO() << endl;
  cout << "PARTIDO: " << Candidatos[i].get_SG_PARTIDO() << " - " << Candidatos[i].get_NM_PARTIDO() << endl;

  cout << "CONFIRMA [CM]   CORRIGE[CR]    ANULA[AN]" << endl;

  cout << endl << endl << endl;

  return Candidatos[i];
}

Candidato_BR Interacao_Sen(Candidato_BR Candidatos[])
{
  string numero;
  Validar validade_do_candidato[3];
  //if DS_CARGO
  //NM_URNA_CANDIDATO
  //NR_CANDIDATO
  //SG_PARTIDO && NM_PARTIDO
  //Primeiro e Seg. suplente
  cout << "SENADOR:" << endl;
  cout << "INSIRA O NÚMERO DO SEU CANDIDATO A SENADOR: ";

  cin >> numero;

  validade_do_candidato[0] = validar_CANDIDATO(numero, Candidatos, "SENADOR", MAX_CANDIDATOS_DF);
  validade_do_candidato[1] = validar_CANDIDATO(numero, Candidatos, "1º SUPLENTE", MAX_CANDIDATOS_DF);
  validade_do_candidato[2] = validar_CANDIDATO(numero, Candidatos, "2º SUPLENTE", MAX_CANDIDATOS_DF);

  int senador = validade_do_candidato[0].numero;
  int suplente1 = validade_do_candidato[1].numero;
  int suplente2 = validade_do_candidato[2].numero;

  cout << "CANDIDATO ESCOLHIDO: " << endl;
  cout << "NOME: " << Candidatos[senador].get_NM_URNA_CANDIDATO() << endl;
  cout << "CARGO: " << Candidatos[senador].get_DS_CARGO() << endl;
  cout << "PARTIDO: " << Candidatos[senador].get_SG_PARTIDO() << " - " << Candidatos[senador].get_NM_PARTIDO() << endl;
  cout << "1º SUPLENTE: "<< ": " << Candidatos[suplente1].get_NM_URNA_CANDIDATO() << endl;
  cout << "2º SUPLENTE: " << Candidatos[suplente2].get_NM_URNA_CANDIDATO() << endl;

  return Candidatos[senador];

}

 Candidato_BR Interacao_Gov(Candidato_BR Candidatos[])
 {
   //if DS_CARGO
   //NM_URNA_CANDIDATO
   //NR_CANDIDATO
   //SG_PARTIDO && NM_PARTIDO
   //Vice

   string numero;
   Validar validade_do_candidato[2];

   cout << "GOVERNADOR: " << endl << "INSIRA O NÚMERO DO SEU CANDIDATO A GOVERNADOR: ";

   cin >> numero;

   validade_do_candidato[0] = validar_CANDIDATO(numero, Candidatos, "GOVERNADOR", MAX_CANDIDATOS_DF);
   validade_do_candidato[1] = validar_CANDIDATO(numero, Candidatos, "VICE-GOVERNADOR", MAX_CANDIDATOS_DF);

   while(validade_do_candidato[0].valido)
   {
     cout << endl << "NÚMERO INVÁLIDO, DIGITE NOVAMENTE: ";
     cin >> numero;
   }

   int i = validade_do_candidato[0].numero;
   int j = validade_do_candidato[1].numero;

   cout << "CANDIDATO ESCOLHIDO: " << endl;
   cout << "NOME: " << Candidatos[i].get_NM_URNA_CANDIDATO() << endl;
   cout << "CARGO: " << Candidatos[i].get_DS_CARGO() << endl;
   cout << "NOME: " << Candidatos[j].get_NM_URNA_CANDIDATO() << endl;
   cout << "CARGO: " << Candidatos[j].get_DS_CARGO() << endl;
   cout << "PARTIDO: " << Candidatos[i].get_SG_PARTIDO() << " - " << Candidatos[i].get_NM_PARTIDO() << endl;

   cout << "CONFIRMA [CM]   CORRIGE[CR]    ANULA[AN]" << endl;

   cout << endl << endl << endl;

   return Candidatos[i];
}

 Candidato_BR Interacao_Pres(Candidato_BR Candidatos[])
 {
   //if DS_CARGO
   //NM_URNA_CANDIDATO
   //NR_CANDIDATO
   //SG_PARTIDO && NM_PARTIDO
   //Vice
string numero;
Validar validade_do_candidato[2];

cout << "PRESIDENTE: " << endl << "INSIRA O NÚMERO DO SEU CANDIDATO A PRESIDENTE: ";

cin >> numero;

validade_do_candidato[0] = validar_CANDIDATO(numero, Candidatos, "PRESIDENTE", MAX_CANDIDATOS_BR);
//validade_do_candidato[1] = validar_CANDIDATO(numero, Candidatos, "VICE-PRESIDENTE");

while(validade_do_candidato[0].valido)
{
  cout << endl << "NÚMERO INVÁLIDO, DIGITE NOVAMENTE: ";
  cin >> numero;
}

int i = validade_do_candidato[0].numero;
//int j = validade_do_candidato[1].numero;

cout << "CANDIDATO ESCOLHIDO: " << endl;
cout << "NOME: " << Candidatos[i].get_NM_URNA_CANDIDATO() << endl;
cout << "CARGO: " << Candidatos[i].get_DS_CARGO() << endl;
//cout << "NOME: " << Candidatos[j].get_NM_URNA_CANDIDATO() << endl;
//cout << "CARGO: " << Candidatos[j].get_DS_CARGO() << endl;
cout << "PARTIDO: " << Candidatos[i].get_SG_PARTIDO() << " - " << Candidatos[i].get_NM_PARTIDO() << endl;

cout << "CONFIRMA [CM]   CORRIGE[CR]    ANULA[AN]" << endl;

cout << endl << endl << endl;

return Candidatos[i];
}

// void Interacao_Fim()
// {
//   //Fim
// }
