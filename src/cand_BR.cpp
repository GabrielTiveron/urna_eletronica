#include "cand_BR.hpp"



Candidato_BR::Candidato_BR(){};
Candidato_BR::~Candidato_BR(){};


//Inicio Setters
void Candidato_BR::set_DT_GERACAO(string DT_GERACAO)
{
  this->DT_GERACAO = DT_GERACAO;
}

void Candidato_BR::set_HH_GERACAO(string HH_GERACAO)
{
  this->HH_GERACAO = HH_GERACAO;
}

void Candidato_BR::set_ANO_ELEICAO(string ANO_ELEICAO)
{
  this->ANO_ELEICAO = ANO_ELEICAO;
}

void Candidato_BR::set_CD_TIPO_ELEICAO(string CD_TIPO_ELEICAO)
{
  this->CD_TIPO_ELEICAO = CD_TIPO_ELEICAO;
}

void Candidato_BR::set_NM_TIPO_ELEICAO(string NM_TIPO_ELEICAO)
{
  this->NM_TIPO_ELEICAO = NM_TIPO_ELEICAO;
}

void Candidato_BR::set_NR_TURNO(string NR_TURNO)
{
  this->NR_TURNO = NR_TURNO;
}

void Candidato_BR::set_CD_ELEICAO(string CD_ELEICAO)
{
  this->CD_ELEICAO = CD_ELEICAO;
}

void Candidato_BR::set_DS_ELEICAO(string DS_ELEICAO)
{
  this->DS_ELEICAO = DS_ELEICAO;
}

void Candidato_BR::set_DT_ELEICAO(string DT_ELEICAO)
{
  this->DT_ELEICAO =DT_ELEICAO;
}

void Candidato_BR::set_TP_ABRANGENCIA(string TP_ABRANGENCIA)
{
  this->TP_ABRANGENCIA = TP_ABRANGENCIA;
}

void Candidato_BR::set_SG_UF(string SG_UF)
{
  this->SG_UF = SG_UF;
}

void Candidato_BR::set_SG_UE(string SG_UE)
{
  this->SG_UE = SG_UE;
}

void Candidato_BR::set_NM_UE(string NM_UE)
{
  this->NM_UE = NM_UE;
}

void Candidato_BR::set_CD_CARGO(string CD_CARGO)
{
  this->CD_CARGO = CD_CARGO;
}

void Candidato_BR::set_DS_CARGO(string DS_CARGO)
{
  this->DS_CARGO = DS_CARGO;
}

void Candidato_BR::set_SQ_CANDIDATO(string SQ_CANDIDATO)
{
  this->SQ_CANDIDATO = SQ_CANDIDATO;
}

void Candidato_BR::set_NR_CANDIDATO(string NR_CANDIDATO)
{
  this->NR_CANDIDATO = NR_CANDIDATO;
}

void Candidato_BR::set_NM_CANDIDATO(string NM_CANDIDATO)
{
  this->NM_CANDIDATO = NM_CANDIDATO;
}

void Candidato_BR::set_NM_URNA_CANDIDATO(string NM_URNA_CANDIDATO)
{
  this->NM_URNA_CANDIDATO = NM_URNA_CANDIDATO;
}

void Candidato_BR::set_NM_SOCIAL_CANDIDATO(string NM_SOCIAL_CANDIDATO)
{
  this->NM_SOCIAL_CANDIDATO = NM_SOCIAL_CANDIDATO;
}

void Candidato_BR::set_NR_CPF_CANDIDATO(string NR_CPF_CANDIDATO)
{
  this->NR_CPF_CANDIDATO = NR_CPF_CANDIDATO;
}

void Candidato_BR::set_NM_EMAIL(string NM_EMAIL)
{
  this->NM_EMAIL = NM_EMAIL;
}

void Candidato_BR::set_CD_SITUACAO_CANDIDATURA(string CD_SITUACAO_CANDIDATURA)
{
  this->CD_SITUACAO_CANDIDATURA = CD_SITUACAO_CANDIDATURA;
}

void Candidato_BR::set_DS_SITUACAO_CANDIDATURA(string DS_SITUACAO_CANDIDATURA)
{
  this->DS_SITUACAO_CANDIDATURA = DS_SITUACAO_CANDIDATURA;
}

void Candidato_BR::set_CD_DETALHE_SITUACAO_CAND(string CD_DETALHE_SITUACAO_CAND)
{
  this->CD_DETALHE_SITUACAO_CAND = CD_DETALHE_SITUACAO_CAND;
}

void Candidato_BR::set_DS_DETALHE_SITUACAO_CAND(string DS_DETALHE_SITUACAO_CAND)
{
  this->DS_DETALHE_SITUACAO_CAND = DS_DETALHE_SITUACAO_CAND;
}

void Candidato_BR::set_TP_AGREMIACAO(string TP_AGREMIACAO)
{
  this->TP_AGREMIACAO = TP_AGREMIACAO;
}

void Candidato_BR::set_NR_PARTIDO(string NR_PARTIDO)
{
  this->NR_PARTIDO = NR_PARTIDO;
}

void Candidato_BR::set_SG_PARTIDO(string SG_PARTIDO)
{
  this->SG_PARTIDO = SG_PARTIDO;
}

void Candidato_BR::set_NM_PARTIDO(string NM_PARTIDO)
{
  this->NM_PARTIDO = NM_PARTIDO;
}

void Candidato_BR::set_SQ_COLIGACAO(string SQ_COLIGACAO)
{
  this->SQ_COLIGACAO = SQ_COLIGACAO;
}

void Candidato_BR::set_NM_COLIGACAO(string NM_COLIGACAO)
{
  this->NM_COLIGACAO = NM_COLIGACAO;
}

void Candidato_BR::set_DS_COMPOSICAO_COLIGACAO(string DS_COMPOSICAO_COLIGACAO)
{
  this->DS_COMPOSICAO_COLIGACAO = DS_COMPOSICAO_COLIGACAO;
}

void Candidato_BR::set_CD_NACIONALIDADE(string CD_NACIONALIDADE)
{
  this->CD_NACIONALIDADE = CD_NACIONALIDADE;
}

void Candidato_BR::set_DS_NACIONALIDADE(string DS_NACIONALIDADE)
{
  this->DS_NACIONALIDADE = DS_NACIONALIDADE;
}

void Candidato_BR::set_SG_UF_NASCIMENTO(string SG_UF_NASCIMENTO)
{
  this->SG_UF_NASCIMENTO = SG_UF_NASCIMENTO;
}

void Candidato_BR::set_CD_MUNICIPIO_NASCIMENTO(string CD_MUNICIPIO_NASCIMENTO)
{
  this->CD_MUNICIPIO_NASCIMENTO = CD_MUNICIPIO_NASCIMENTO;
}

void Candidato_BR::set_NM_MUNICIPIO_NASCIMENTO(string NM_MUNICIPIO_NASCIMENTO)
{
  this->NM_MUNICIPIO_NASCIMENTO = NM_MUNICIPIO_NASCIMENTO;
}

void Candidato_BR::set_DT_NASCIMENTO(string DT_NASCIMENTO)
{
  this->DT_NASCIMENTO = DT_NASCIMENTO;
}

void Candidato_BR::set_NR_IDADE_DATA_POSSE(string NR_IDADE_DATA_POSSE)
{
  this->NR_IDADE_DATA_POSSE = NR_IDADE_DATA_POSSE;
}

void Candidato_BR::set_NR_TITULO_ELEITORAL_CANDIDATO(string NR_TITULO_ELEITORAL_CANDIDATO)
{
  this->NR_TITULO_ELEITORAL_CANDIDATO = NR_TITULO_ELEITORAL_CANDIDATO;
}

void Candidato_BR::set_CD_GENERO(string CD_GENERO)
{
  this->CD_GENERO = CD_GENERO;
}

void Candidato_BR::set_DS_GENERO(string DS_GENERO)
{
  this->DS_GENERO = DS_GENERO;
}

void Candidato_BR::set_CD_GRAU_INSTRUCAO(string CD_GRAU_INSTRUCAO)
{
  this->CD_GRAU_INSTRUCAO = CD_GRAU_INSTRUCAO;
}

void Candidato_BR::set_DS_GRAU_INSTRUCAO(string DS_GRAU_INSTRUCAO)
{
  this->DS_GRAU_INSTRUCAO = DS_GRAU_INSTRUCAO;
}

void Candidato_BR::set_CD_ESTADO_CIVIL(string CD_ESTADO_CIVIL)
{
  this->CD_ESTADO_CIVIL = CD_ESTADO_CIVIL;
}

void Candidato_BR::set_DS_ESTADO_CIVIL(string DS_ESTADO_CIVIL)
{
  this->DS_ESTADO_CIVIL = DS_ESTADO_CIVIL;
}

void Candidato_BR::set_CD_COR_RACA(string CD_COR_RACA)
{
  this->CD_COR_RACA = CD_COR_RACA;
}

void Candidato_BR::set_DS_COR_RACA(string DS_COR_RACA)
{
  this->DS_COR_RACA = DS_COR_RACA;
}

void Candidato_BR::set_CD_OCUPACAO(string CD_OCUPACAO)
{
  this->CD_OCUPACAO = CD_OCUPACAO;
}

void Candidato_BR::set_DS_OCUPACAO(string DS_OCUPACAO)
{
  this->DS_OCUPACAO = DS_OCUPACAO;
}

void Candidato_BR::set_NR_DESPESA_MAX_CAMPANHA(string NR_DESPESA_MAX_CAMPANHA)
{
  this->NR_DESPESA_MAX_CAMPANHA = NR_DESPESA_MAX_CAMPANHA;
}

void Candidato_BR::set_CD_SIT_TOT_TURNO(string CD_SIT_TOT_TURNO)
{
  this->CD_SIT_TOT_TURNO = CD_SIT_TOT_TURNO;
}

void Candidato_BR::set_DS_SIT_TOT_TURNO(string DS_SIT_TOT_TURNO)
{
  this->DS_SIT_TOT_TURNO = DS_SIT_TOT_TURNO;
}

void Candidato_BR::set_ST_REELEICAO(string ST_REELEICAO)
{
  this->ST_REELEICAO = ST_REELEICAO;
}

void Candidato_BR::set_ST_DECLARAR_BENS(string ST_DECLARAR_BENS)
{
  this->ST_DECLARAR_BENS = ST_DECLARAR_BENS;
}

void Candidato_BR::set_NR_PROTOCOLO_CANDIDATURA(string NR_PROTOCOLO_CANDIDATURA)
{
  this->NR_PROTOCOLO_CANDIDATURA = NR_PROTOCOLO_CANDIDATURA;
}

void Candidato_BR::set_NR_PROCESSO(string NR_PROCESSO)
{
  this->NR_PROCESSO = NR_PROCESSO;
}
//Final Setters




// //Inicio Getters
string Candidato_BR::get_DT_GERACAO()
{
  return DT_GERACAO;
}

string Candidato_BR::get_HH_GERACAO()
{
  return HH_GERACAO;
}

string Candidato_BR::get_ANO_ELEICAO()
{
  return ANO_ELEICAO;
}

string Candidato_BR::get_CD_TIPO_ELEICAO()
{
  return CD_TIPO_ELEICAO;
}

string Candidato_BR::get_NM_TIPO_ELEICAO()
{
  return NM_TIPO_ELEICAO;
}

string Candidato_BR::get_NR_TURNO()
{
  return NR_TURNO;
}

string Candidato_BR::get_CD_ELEICAO()
{
  return CD_ELEICAO;
}

string Candidato_BR::get_DS_ELEICAO()
{
  return DS_ELEICAO;
}

string Candidato_BR::get_DT_ELEICAO()
{
  return DT_ELEICAO;
}

string Candidato_BR::get_TP_ABRANGENCIA()
{
  return TP_ABRANGENCIA;
}

string Candidato_BR::get_SG_UF()
{
  return SG_UF;
}

string Candidato_BR::get_SG_UE()
{
  return SG_UE;
}

string Candidato_BR::get_NM_UE()
{
  return NM_UE;
}

string Candidato_BR::get_CD_CARGO()
{
  return CD_CARGO;
}

string Candidato_BR::get_DS_CARGO()
{
  return DS_CARGO;
}

string Candidato_BR::get_SQ_CANDIDATO()
{
  return SQ_CANDIDATO;
}

string Candidato_BR::get_NR_CANDIDATO()
{
  return NR_CANDIDATO;
}

string Candidato_BR::get_NM_CANDIDATO()
{
  return NM_CANDIDATO;
}

string Candidato_BR::get_NM_URNA_CANDIDATO()
{
  return NM_URNA_CANDIDATO;
}

string Candidato_BR::get_NM_SOCIAL_CANDIDATO()
{
  return NM_SOCIAL_CANDIDATO;
}

string Candidato_BR::get_NR_CPF_CANDIDATO()
{
  return NR_CPF_CANDIDATO;
}

string Candidato_BR::get_NM_EMAIL()
{
  return NM_EMAIL;
}

string Candidato_BR::get_CD_SITUACAO_CANDIDATURA()
{
  return CD_SITUACAO_CANDIDATURA;
}

string Candidato_BR::get_DS_SITUACAO_CANDIDATURA()
{
  return DS_SITUACAO_CANDIDATURA;
}

string Candidato_BR::get_CD_DETALHE_SITUACAO_CAND()
{
  return CD_DETALHE_SITUACAO_CAND;
}

string Candidato_BR::get_DS_DETALHE_SITUACAO_CAND()
{
  return DS_DETALHE_SITUACAO_CAND;
}

string Candidato_BR::get_TP_AGREMIACAO()
{
  return TP_AGREMIACAO;
}

string Candidato_BR::get_NR_PARTIDO()
{
  return NR_PARTIDO;
}

string Candidato_BR::get_SG_PARTIDO()
{
  return SG_PARTIDO;
}

string Candidato_BR::get_NM_PARTIDO()
{
  return NM_PARTIDO;
}

string Candidato_BR::get_SQ_COLIGACAO()
{
  return SQ_COLIGACAO;
}

string Candidato_BR::get_NM_COLIGACAO()
{
  return NM_COLIGACAO;
}

string Candidato_BR::get_DS_COMPOSICAO_COLIGACAO()
{
  return DS_COMPOSICAO_COLIGACAO;
}

string Candidato_BR::get_CD_NACIONALIDADE()
{
  return CD_NACIONALIDADE;
}

string Candidato_BR::get_DS_NACIONALIDADE()
{
  return DS_NACIONALIDADE;
}

string Candidato_BR::get_SG_UF_NASCIMENTO()
{
  return SG_UF_NASCIMENTO;
}

string Candidato_BR::get_CD_MUNICIPIO_NASCIMENTO()
{
  return CD_MUNICIPIO_NASCIMENTO;
}

string Candidato_BR::get_NM_MUNICIPIO_NASCIMENTO()
{
  return NM_MUNICIPIO_NASCIMENTO;
}

string Candidato_BR::get_DT_NASCIMENTO()
{
  return DT_NASCIMENTO;
}

string Candidato_BR::get_NR_IDADE_DATA_POSSE()
{
  return NR_IDADE_DATA_POSSE;
}

string Candidato_BR::get_NR_TITULO_ELEITORAL_CANDIDATO()
{
  return NR_TITULO_ELEITORAL_CANDIDATO;
}

string Candidato_BR::get_CD_GENERO()
{
  return CD_GENERO;
}

string Candidato_BR::get_DS_GENERO()
{
  return DS_GENERO;
}

string Candidato_BR::get_CD_GRAU_INSTRUCAO()
{
  return CD_GRAU_INSTRUCAO;
}

string Candidato_BR::get_DS_GRAU_INSTRUCAO()
{
  return DS_GRAU_INSTRUCAO;
}

string Candidato_BR::get_CD_ESTADO_CIVIL()
{
  return CD_ESTADO_CIVIL;
}

string Candidato_BR::get_DS_ESTADO_CIVIL()
{
  return DS_ESTADO_CIVIL;
}

string Candidato_BR::get_CD_COR_RACA()
{
  return CD_COR_RACA;
}

string Candidato_BR::get_DS_COR_RACA()
{
  return DS_COR_RACA;
}

string Candidato_BR::get_CD_OCUPACAO()
{
  return CD_OCUPACAO;
}

string Candidato_BR::get_DS_OCUPACAO()
{
  return DS_OCUPACAO;
}

string Candidato_BR::get_NR_DESPESA_MAX_CAMPANHA()
{
  return NR_DESPESA_MAX_CAMPANHA;
}

string Candidato_BR::get_CD_SIT_TOT_TURNO()
{
  return CD_SIT_TOT_TURNO;
}

string Candidato_BR::get_DS_SIT_TOT_TURNO()
{
  return DS_SIT_TOT_TURNO;
}

string Candidato_BR::get_ST_REELEICAO()
{
  return ST_REELEICAO;
}

string Candidato_BR::get_ST_DECLARAR_BENS()
{
  return ST_DECLARAR_BENS;
}

string Candidato_BR::get_NR_PROTOCOLO_CANDIDATURA()
{
  return NR_PROTOCOLO_CANDIDATURA;
}

string Candidato_BR::get_NR_PROCESSO()
{
  return NR_PROCESSO;
}
