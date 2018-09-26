#include"../inc/urna.hpp"
#include"../inc/instanciar.hpp"

using namespace std;


Candidato interacao_dep(string cargo, string extensao)
{
  Candidato deputado;

  bool interacao;
  interacao = true;
  while(interacao)
  {
    cout << "DIGITE O CODIGO DO SEU CANDIDATO A " << cargo << ": ";

    opcao_voto codigo;
    codigo = codigo_candidato();

    if(!codigo.branco)
    {
      separa_atributos atributos;
      try
      {
        atributos = instanciar_candidatos(cargo, extensao, to_string(codigo.codigo));
      }
      catch(bool e)
      {
        cout << "ERRO AO ABRIR ARQUIVO" << endl;
      }

      if(atributos.validade_candidato)
      {
        deputado.distribuir_atributos(atributos);
        deputado.mostrar_dados();
      }
      else
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        deputado.set_candidato_nulo(atributos.validade_candidato);
      }


      bool confirma;
      confirma = confirmacao();

      if(confirma)
      {
        deputado.voto_confirmado();
        interacao = false;
      }
      else
      {
        system("clear");
      }
    }
    else
    {
      bool confirma;
      confirma = confirmacao();
      if(confirma)
      {
        interacao = false;
        deputado.set_candidato_branco(true);
      }
      else
      {
        system("clear");
      }
    }
  }


  system("clear");
  return deputado;

}

Senador interacao_senador(string cargo, string extensao)
{
  Senador senador;

  bool interacao;
  interacao = true;
  while(interacao)
  {
    cout << "DIGITE O CODIGO DO SEU CANDIDATO A " << cargo << ": ";

    opcao_voto codigo;
    codigo = codigo_candidato();
    if(!codigo.branco)
    {
      separa_atributos atributos;
      try
      {
        atributos = instanciar_candidatos(cargo, extensao, to_string(codigo.codigo));
      }
      catch(bool e)
      {
        cout << "ERRO AO ABRIR ARQUIVO" << endl;
      }


      if(atributos.validade_candidato)
      {
        senador.distribuir_atributos(atributos);

        Candidato suplente_1;
        Candidato suplente_2;

        try
        {
          atributos  = instanciar_candidatos("1º SUPLENTE", extensao, to_string(codigo.codigo));
          suplente_1.distribuir_atributos(atributos);
          atributos  = instanciar_candidatos("2º SUPLENTE", extensao, to_string(codigo.codigo));
          suplente_2.distribuir_atributos(atributos);
        }
        catch(bool e)
        {
          cout << "ERRO AO ABRIR ARQUIVO" << endl;
        }

        senador.set_suplente_1(suplente_1.get_nome());
        senador.set_suplente_2(suplente_2.get_nome());
        senador.mostrar_dados();
      }
      else
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        senador.set_candidato_nulo(atributos.validade_candidato);
      }


      bool confirma;
      confirma = confirmacao();

      if(confirma)
      {
        senador.voto_confirmado();
        interacao = false;
      }
      else
      {
        system("clear");
      }
    }
    else
    {
      bool confirma;
      confirma = confirmacao();
      if(confirma)
      {
        interacao = false;
        senador.set_candidato_branco(true);
      }
      else
      {
        system("clear");
      }
    }
  }


  system("clear");
  return senador;
}

bool confirmacao()
{
  cout << "DIGITE – CONFIRMA – PARA CONFIRMAR ESTE VOTO E – CORRIGE – PARA REINICIAR ESTE VOTO" << endl;

  string opcao;
  while(true)
  {
    cin >> opcao;
    transform(opcao.begin(), opcao.end(),opcao.begin(), ::toupper);
    if(opcao.compare("CONFIRMA") == 0)
    {
      return true;
    }
    else if(opcao.compare("CORRIGE") == 0)
    {
      return false;
    }
    else
    {
      cout << "POR FAVOR, DIGITE APENAS OS CARACTERES ESPECIFICADOS" << endl;
    }
  }
}


opcao_voto codigo_candidato()
{
  string numero;
  opcao_voto opcao;

  while(true)
  {
    cin >> numero;
    transform(numero.begin(), numero.end(), numero.begin(), ::toupper);
    if (numero.compare("BRANCO") == 0)
    {
      cout << "VOTO EM BRANCO" << endl;
      opcao.branco = true;
      return opcao;
    }
    else
    {

      try
      {
        opcao.codigo = stoi(numero,nullptr,10);
        return opcao;
      }

      catch(exception &e){
        cout << "APENAS NÚMEROS SÃO PERMITIDOS!" << endl;
      }
    }
  }
}
