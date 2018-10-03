#include "../inc/apuravotos.hpp"
#include"../inc/instanciar.hpp"
#include<vector>

void vencedor(vector<Candidato> &candidato)
{
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    candidato[i].set_voto();
    candidato[i].incrementa_voto();
  }

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    for(int j = i-1; j >= 0; j--)
    {
      if(candidato[i].get_nome().compare(candidato[j].get_nome()) != 0)
      {
        if(i == 0)
        {
          candidato[i].incrementa_voto();
        }

      }
      else
      {
        candidato[i].incrementa_voto();
      }
    }
  }

  int maior = 0;
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior < candidato[i].get_votos())
    {
      maior = candidato[i].get_votos();
    }
  }
  int contador = 0;

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior == candidato[i].get_votos() && !candidato[i].get_candidato_nulo() && !candidato[i].get_candidato_branco())
    {
      contador++;
    }
  }
  cout << "RESULTADO " << tirar_aspas(candidato[0].get_cargo()) << endl;
  if(contador > 1)
  {
    cout << "EMPATE ENTRE: ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << candidato[k].get_nome() << " ";
      }
    }
  }
  else
  {
    cout << "VENCEDOR(A): ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << tirar_aspas(candidato[k].get_nome()) << endl;
      }
    }
  }
}

void vencedor(vector<Senador> &candidato)
{
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    candidato[i].set_voto();
    candidato[i].incrementa_voto();
  }

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    for(int j = i-1; j >= 0; j--)
    {
      if(candidato[i].get_nome().compare(candidato[j].get_nome()) != 0)
      {
        if(i == 0)
        {
          candidato[i].incrementa_voto();
        }

      }
      else
      {
        candidato[i].incrementa_voto();
      }
    }
  }

  int maior = 0;
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior < candidato[i].get_votos())
    {
      maior = candidato[i].get_votos();
    }
  }
  int contador = 0;

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior == candidato[i].get_votos() && !candidato[i].get_candidato_nulo() && !candidato[i].get_candidato_branco())
    {
      contador++;
    }
  }
  cout << "RESULTADO " << tirar_aspas(candidato[0].get_cargo()) << endl;
  if(contador > 1)
  {
    cout << "EMPATE ENTRE: ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << candidato[k].get_nome() << " ";
      }
    }
  }
  else
  {
    cout << "VENCEDOR(A): ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << tirar_aspas(candidato[k].get_nome()) << endl;
      }
    }
  }
}

void vencedor(vector<Governador> &candidato)
{
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    candidato[i].set_voto();
    candidato[i].incrementa_voto();
  }

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    for(int j = i-1; j >= 0; j--)
    {
      if(candidato[i].get_nome().compare(candidato[j].get_nome()) != 0)
      {
        if(i == 0)
        {
          candidato[i].incrementa_voto();
        }

      }
      else
      {
        candidato[i].incrementa_voto();
      }
    }
  }

  int maior = 0;
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior < candidato[i].get_votos())
    {
      maior = candidato[i].get_votos();
    }
  }
  int contador = 0;

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior == candidato[i].get_votos() && !candidato[i].get_candidato_nulo() && !candidato[i].get_candidato_branco())
    {
      contador++;
    }
  }
  cout << "RESULTADO " << tirar_aspas(candidato[0].get_cargo()) << endl;
  if(contador > 1)
  {
    cout << "EMPATE ENTRE: ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << candidato[k].get_nome() << " ";
      }
    }
  }
  else
  {
    cout << "VENCEDOR(A): ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << tirar_aspas(candidato[k].get_nome()) << endl;
      }
    }
  }
}

void vencedor(vector<Presidente> &candidato)
{
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    candidato[i].set_voto();
    candidato[i].incrementa_voto();
  }

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    for(int j = i-1; j >= 0; j--)
    {
      if(candidato[i].get_nome().compare(candidato[j].get_nome()) != 0)
      {
        if(i == 0)
        {
          candidato[i].incrementa_voto();
        }

      }
      else
      {
        candidato[i].incrementa_voto();
      }
    }
  }

  int maior = 0;
  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior < candidato[i].get_votos())
    {
      maior = candidato[i].get_votos();
    }
  }
  int contador = 0;

  for(unsigned i = 0; i < candidato.size(); i++)
  {
    if(maior == candidato[i].get_votos() && !candidato[i].get_candidato_nulo() && !candidato[i].get_candidato_branco())
    {
      contador++;
    }
  }
  cout << "RESULTADO " << tirar_aspas(candidato[0].get_cargo()) << endl;
  if(contador > 1)
  {
    cout << "HAVERÁ SEGUNDO TURNO ENTRE: ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << candidato[k].get_nome() << " ";
      }
    }
  }
  else
  {
    cout << "VENCEDOR(A): ";
    for(unsigned k = 0; k < candidato.size(); k++)
    {
      if(maior == candidato[k].get_votos() && !candidato[k].get_candidato_nulo() && !candidato[k].get_candidato_branco())
      {
        cout << tirar_aspas(candidato[k].get_nome()) << endl;
      }
    }
  }
}

void mostrar_vencedores(vector<Presidente> &presidente, vector<Governador> &governador, vector<Senador> &senador, vector<Candidato> &dep_fed, vector<Candidato> &dep_dist)
{
  vencedor(dep_fed);
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
  vencedor(dep_dist);
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
  vencedor(senador);
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
  vencedor(governador);
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
  vencedor(presidente);
  cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;
}
