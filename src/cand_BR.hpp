#ifndef CAND_BR_HPP
#define CAND_BR_HPP

#include<iostream>
#include<string>

using namespace std;

class Candidato_BR
{


  private:

    string DT_GERACAO;
    string HH_GERACAO;
    string ANO_ELEICAO;
    string CD_TIPO_ELEICAO;
    string NM_TIPO_ELEICAO;
    string NR_TURNO;
    string CD_ELEICAO;
    string DS_ELEICAO;
    string DT_ELEICAO;
    string TP_ABRANGENCIA;
    string SG_UF;
    string SG_UE;
    string NM_UE;
    string CD_CARGO;
    string DS_CARGO;
    string SQ_CANDIDATO;
    string NR_CANDIDATO;
    string NM_CANDIDATO;
    string NM_URNA_CANDIDATO;
    string NM_SOCIAL_CANDIDATO;
    string NR_CPF_CANDIDATO;
    string NM_EMAIL;
    string CD_SITUACAO_CANDIDATURA;
    string DS_SITUACAO_CANDIDATURA;
    string CD_DETALHE_SITUACAO_CAND;
    string DS_DETALHE_SITUACAO_CAND;
    string TP_AGREMIACAO;
    string NR_PARTIDO;
    string SG_PARTIDO;
    string NM_PARTIDO;
    string SQ_COLIGACAO;
    string NM_COLIGACAO;
    string DS_COMPOSICAO_COLIGACAO;
    string CD_NACIONALIDADE;
    string DS_NACIONALIDADE;
    string SG_UF_NASCIMENTO;
    string CD_MUNICIPIO_NASCIMENTO;
    string NM_MUNICIPIO_NASCIMENTO;
    string DT_NASCIMENTO;
    string NR_IDADE_DATA_POSSE;
    string NR_TITULO_ELEITORAL_CANDIDATO;
    string CD_GENERO;
    string DS_GENERO;
    string CD_GRAU_INSTRUCAO;
    string DS_GRAU_INSTRUCAO;
    string CD_ESTADO_CIVIL;
    string DS_ESTADO_CIVIL;
    string CD_COR_RACA;
    string DS_COR_RACA;
    string CD_OCUPACAO;
    string DS_OCUPACAO;
    string NR_DESPESA_MAX_CAMPANHA;
    string CD_SIT_TOT_TURNO;
    string DS_SIT_TOT_TURNO;
    string ST_REELEICAO;
    string ST_DECLARAR_BENS;
    string NR_PROTOCOLO_CANDIDATURA;
    string NR_PROCESSO;


  public:

    Candidato_BR();
    ~Candidato_BR();
    void set_DT_GERACAO(string DT_GERACAO);
    void set_HH_GERACAO(string HH_GERACAO);
    void set_ANO_ELEICAO(string ANO_ELEICAO);
    void set_CD_TIPO_ELEICAO(string CD_TIPO_ELEICAO);
    void set_NM_TIPO_ELEICAO(string NM_TIPO_ELEICAO);
    void set_NR_TURNO(string NR_TURNO);
    void set_CD_ELEICAO(string CD_ELEICAO);
    void set_DS_ELEICAO(string DS_ELEICAO);
    void set_DT_ELEICAO(string DT_ELEICAO);
    void set_TP_ABRANGENCIA(string TP_ABRANGENCIA);
    void set_SG_UF(string SG_UF);
    void set_SG_UE(string SG_UE);
    void set_NM_UE(string NM_UE);
    void set_CD_CARGO(string CD_CARGO);
    void set_DS_CARGO(string DS_CARGO);
    void set_SQ_CANDIDATO(string SQ_CANDIDATO);
    void set_NR_CANDIDATO(string NR_CANDIDATO);
    void set_NM_CANDIDATO(string NM_CANDIDATO);
    void set_NM_URNA_CANDIDATO(string NM_URNA_CANDIDATO);
    void set_NM_SOCIAL_CANDIDATO(string NM_SOCIAL_CANDIDATO);
    void set_NR_CPF_CANDIDATO(string NR_CPF_CANDIDATO);
    void set_NM_EMAIL(string NM_EMAIL);
    void set_CD_SITUACAO_CANDIDATURA(string CD_SITUACAO_CANDIDATURA);
    void set_DS_SITUACAO_CANDIDATURA(string DS_SITUACAO_CANDIDATURA);
    void set_CD_DETALHE_SITUACAO_CAND(string CD_DETALHE_SITUACAO_CAND);
    void set_DS_DETALHE_SITUACAO_CAND(string DS_DETALHE_SITUACAO_CAND);
    void set_TP_AGREMIACAO(string TP_AGREMIACAO);
    void set_NR_PARTIDO(string NR_PARTIDO);
    void set_SG_PARTIDO(string SG_PARTIDO);
    void set_NM_PARTIDO(string NM_PARTIDO);
    void set_SQ_COLIGACAO(string SQ_COLIGACAO);
    void set_NM_COLIGACAO(string NM_COLIGACAO);
    void set_DS_COMPOSICAO_COLIGACAO(string DS_COMPOSICAO_COLIGACAO);
    void set_CD_NACIONALIDADE(string CD_NACIONALIDADE);
    void set_DS_NACIONALIDADE(string DS_NACIONALIDADE);
    void set_SG_UF_NASCIMENTO(string SG_UF_NASCIMENTO);
    void set_CD_MUNICIPIO_NASCIMENTO(string CD_MUNICIPIO_NASCIMENTO);
    void set_NM_MUNICIPIO_NASCIMENTO(string NM_MUNICIPIO_NASCIMENTO);
    void set_DT_NASCIMENTO(string DT_NASCIMENTO);
    void set_NR_IDADE_DATA_POSSE(string NR_IDADE_DATA_POSSE);
    void set_NR_TITULO_ELEITORAL_CANDIDATO(string NR_TITULO_ELEITORAL_CANDIDATO);
    void set_CD_GENERO(string CD_GENERO);
    void set_DS_GENERO(string DS_GENERO);
    void set_CD_GRAU_INSTRUCAO(string CD_GRAU_INSTRUCAO);
    void set_DS_GRAU_INSTRUCAO(string DS_GRAU_INSTRUCAO);
    void set_CD_ESTADO_CIVIL(string CD_ESTADO_CIVIL);
    void set_DS_ESTADO_CIVIL(string DS_ESTADO_CIVIL);
    void set_CD_COR_RACA(string CD_COR_RACA);
    void set_DS_COR_RACA(string DS_COR_RACA);
    void set_CD_OCUPACAO(string CD_OCUPACAO);
    void set_DS_OCUPACAO(string DS_OCUPACAO);
    void set_NR_DESPESA_MAX_CAMPANHA(string NR_DESPESA_MAX_CAMPANHA);
    void set_CD_SIT_TOT_TURNO(string CD_SIT_TOT_TURNO);
    void set_DS_SIT_TOT_TURNO(string DS_SIT_TOT_TURNO);
    void set_ST_REELEICAO(string ST_REELEICAO);
    void set_ST_DECLARAR_BENS(string ST_DECLARAR_BENS);
    void set_NR_PROTOCOLO_CANDIDATURA(string NR_PROTOCOLO_CANDIDATURA);
    void set_NR_PROCESSO(string NR_PROCESSO);

    // void desc_CANDIDATO(int NM_CANDIDATO, Candidato_BR Candidatos[]);

    string get_DT_GERACAO();
    string get_HH_GERACAO();
    string get_ANO_ELEICAO();
    string get_CD_TIPO_ELEICAO();
    string get_NM_TIPO_ELEICAO();
    string get_NR_TURNO();
    string get_CD_ELEICAO();
    string get_DS_ELEICAO();
    string get_DT_ELEICAO();
    string get_TP_ABRANGENCIA();
    string get_SG_UF();
    string get_SG_UE();
    string get_NM_UE();
    string get_CD_CARGO();
    string get_DS_CARGO();
    string get_SQ_CANDIDATO();
    string get_NR_CANDIDATO();
    string get_NM_CANDIDATO();
    string get_NM_URNA_CANDIDATO();
    string get_NM_SOCIAL_CANDIDATO();
    string get_NR_CPF_CANDIDATO();
    string get_NM_EMAIL();
    string get_CD_SITUACAO_CANDIDATURA();
    string get_DS_SITUACAO_CANDIDATURA();
    string get_CD_DETALHE_SITUACAO_CAND();
    string get_DS_DETALHE_SITUACAO_CAND();
    string get_TP_AGREMIACAO();
    string get_NR_PARTIDO();
    string get_SG_PARTIDO();
    string get_NM_PARTIDO();
    string get_SQ_COLIGACAO();
    string get_NM_COLIGACAO();
    string get_DS_COMPOSICAO_COLIGACAO();
    string get_CD_NACIONALIDADE();
    string get_DS_NACIONALIDADE();
    string get_SG_UF_NASCIMENTO();
    string get_CD_MUNICIPIO_NASCIMENTO();
    string get_NM_MUNICIPIO_NASCIMENTO();
    string get_DT_NASCIMENTO();
    string get_NR_IDADE_DATA_POSSE();
    string get_NR_TITULO_ELEITORAL_CANDIDATO();
    string get_CD_GENERO();
    string get_DS_GENERO();
    string get_CD_GRAU_INSTRUCAO();
    string get_DS_GRAU_INSTRUCAO();
    string get_CD_ESTADO_CIVIL();
    string get_DS_ESTADO_CIVIL();
    string get_CD_COR_RACA();
    string get_DS_COR_RACA();
    string get_CD_OCUPACAO();
    string get_DS_OCUPACAO();
    string get_NR_DESPESA_MAX_CAMPANHA();
    string get_CD_SIT_TOT_TURNO();
    string get_DS_SIT_TOT_TURNO();
    string get_ST_REELEICAO();
    string get_ST_DECLARAR_BENS();
    string get_NR_PROTOCOLO_CANDIDATURA();
    string get_NR_PROCESSO();
};



#endif
