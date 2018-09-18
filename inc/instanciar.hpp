#ifndef INSTANCIAR_HPP
#define INSTANCIAR_HPP

typedef struct validacao
{
  int numero;
  bool valido;
}Validar;

Validar validar_CANDIDATO(string NM_CANDIDATO, Candidato_BR Candidatos[], string tipo, int nmr_cand);
void Instanciar_BR(Candidato_BR Candidatos[], bool BR);
string colocar_aspas(string texto);


#endif
