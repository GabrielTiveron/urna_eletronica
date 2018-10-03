#ifndef APURAVOTOS_HPP
#define APURAVOTOS_HPP

#include<string>
#include<vector>
#include"../inc/eleitor.hpp"

void vencedor           (vector<Candidato> &candidato);
void vencedor           (vector<Senador> &candidato);
void vencedor           (vector<Governador> &candidato);
void vencedor           (vector<Presidente> &candidato);
void mostrar_vencedores (vector<Presidente> &presidente, vector<Governador> &governador, vector<Senador> &senador,
                        vector<Candidato> &dep_fed, vector<Candidato> &dep_dist);


#endif
