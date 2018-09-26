#ifndef INSTANCIAR_HPP
#define INSTANCIAR_HPP

#include<string>
#include<fstream>
#include<sstream>
#include"../inc/candidato.hpp"
#include"../inc/presidente.hpp"
#include"../inc/senador.hpp"
#include"../inc/governador.hpp"

using namespace std;



separa_atributos instanciar_candidatos  (string cargo, string extensao, string codigo);
string           colocar_aspas          (string texto);
string           tirar_aspas            (string texto);

#endif
