#ifndef INSTANCIAR_HPP
#define INSTANCIAR_HPP

#include<string>
#include<fstream>
#include<sstream>
#include"../inc/candidato.hpp"
#include"../inc/presidente.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"
#include"../inc/eleitor.hpp"
#include"../inc/urna.hpp"

using namespace std;



separa_atributos instanciar_candidatos  (string cargo, string extensao, string codigo);
string           colocar_aspas          (string texto);
string           tirar_aspas            (string texto);
opcao_voto       codigo_candidato       ();
bool             confirmacao            ();
separa_atributos ler_arquivo            (string cargo, string extensao, string codigo);


#endif
