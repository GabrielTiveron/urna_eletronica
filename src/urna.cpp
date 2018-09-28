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

      atributos = ler_arquivo(cargo, extensao, to_string(codigo.codigo));

      if(atributos.validade_candidato && atributos.candidato_apto)
      {
        deputado.distribuir_atributos(atributos);
        deputado.mostrar_dados();
      }
      else if(!atributos.validade_candidato)
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        deputado.set_candidato_nulo(atributos.validade_candidato);
      }
      else if(!atributos.candidato_apto)
      {
        cout << "CANDIDATO INÁPTO À ELEIÇÃO VIGENTE" << endl;
        cout << "SEU VOTO SERÁ ATRIBUIDO AOS VOTOS NULOS" << endl;
        deputado.set_candidato_nulo(atributos.candidato_apto);
      }

      interacao = confirma_voto();
      deputado.set_candidato_branco(false);
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
      atributos = ler_arquivo(cargo, extensao, to_string(codigo.codigo));

      if(atributos.validade_candidato && atributos.candidato_apto)
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
      else if(!atributos.validade_candidato)
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        senador.set_candidato_nulo(atributos.validade_candidato);
      }
      else if(!atributos.candidato_apto)
      {
        cout << "CANDIDATO INÁPTO À ELEIÇÃO VIGENTE" << endl;
        cout << "SEU VOTO SERÁ ATRIBUIDO AOS VOTOS NULOS" << endl;
        senador.set_candidato_nulo(atributos.candidato_apto);
      }

      interacao = confirma_voto();
      senador.set_candidato_branco(false);
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


Senador interacao_senador(string cargo, string extensao, Senador senador_1)
{
  Senador senador;
  opcao_voto codigo;


  bool interacao;
  interacao = true;
  while(interacao)
  {
    cout << "DIGITE O CODIGO DO SEU CANDIDATO A " << cargo << ": ";
    codigo = codigo_candidato();
    if(!codigo.branco)
    {
      if(to_string(codigo.codigo).compare(tirar_aspas(senador_1.get_codigo())) != 0)
      {
        separa_atributos atributos;

        atributos = ler_arquivo(cargo, extensao, to_string(codigo.codigo));

        if(atributos.validade_candidato && atributos.candidato_apto)
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
        if(!atributos.validade_candidato)
        {
          cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
          senador.set_candidato_nulo(atributos.validade_candidato);
        }
        if(!atributos.candidato_apto)
        {
          cout << "CANDIDATO INÁPTO À ELEIÇÃO VIGENTE" << endl;
          cout << "SEU VOTO SERÁ ATRIBUIDO AOS VOTOS NULOS" << endl;
          senador.set_candidato_nulo(atributos.candidato_apto);
        }

        interacao = confirma_voto();
        senador.set_candidato_branco(false);
      }
      else
      {
        cout << "VOTO NULO POR REPETIR O CANDIDATO ANTERIOR" << endl;
        bool confirma;
        confirma = confirmacao();
        if(confirma)
        {
          senador.set_candidato_nulo(true);
          interacao = false;
        }
        else
          system("clear");
      }
    }
    else if(codigo.branco)
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

Governador interacao_governador(string cargo, string extensao)
{
  Governador governador;

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

        atributos = ler_arquivo(cargo, extensao, to_string(codigo.codigo));


      if(atributos.validade_candidato && atributos.candidato_apto)
      {
        governador.distribuir_atributos(atributos);

        Candidato vice;

        try
        {
          atributos  = instanciar_candidatos("VICE-GOVERNADOR", extensao, to_string(codigo.codigo));
          vice.distribuir_atributos(atributos);
        }
        catch(bool e)
        {
          cout << "ERRO AO ABRIR ARQUIVO" << endl;
        }

        governador.set_vice_governador(vice.get_nome());
        governador.mostrar_dados();
      }
      else if(!atributos.validade_candidato)
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        governador.set_candidato_nulo(atributos.validade_candidato);
      }
      else if(!atributos.candidato_apto)
      {
        cout << "CANDIDATO INÁPTO À ELEIÇÃO VIGENTE" << endl;
        cout << "SEU VOTO SERÁ ATRIBUIDO AOS VOTOS NULOS" << endl;
        governador.set_candidato_nulo(atributos.candidato_apto);
      }

      interacao = confirma_voto();
      governador.set_candidato_branco(false);
    }
    else
    {
      bool confirma;
      confirma = confirmacao();
      if(confirma)
      {
        interacao = false;
        governador.set_candidato_branco(true);
      }
      else
      {
        system("clear");
      }
    }
  }


  system("clear");
  return governador;

}

Presidente interacao_presidente(string cargo, string extensao)
{
  Presidente presidente;

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

      atributos = ler_arquivo(cargo, extensao, to_string(codigo.codigo));


      if(atributos.validade_candidato && atributos.candidato_apto)
      {
        presidente.distribuir_atributos(atributos);

        Candidato vice;

        try
        {
          atributos  = instanciar_candidatos("VICE-PRESIDENTE", extensao, to_string(codigo.codigo));
          vice.distribuir_atributos(atributos);
        }
        catch(bool e)
        {
          cout << "ERRO AO ABRIR ARQUIVO" << endl;
        }

        presidente.set_vice_presidente(vice.get_nome());
        presidente.mostrar_dados();
      }
      else if(!atributos.validade_candidato)
      {
        cout << "SEU VOTO ESTÁ SENDO ATRIBUIDO AOS VOTOS NULOS" << endl;
        presidente.set_candidato_nulo(atributos.validade_candidato);
      }
      else if(!atributos.candidato_apto)
      {
        cout << "CANDIDATO INÁPTO À ELEIÇÃO VIGENTE" << endl;
        cout << "SEU VOTO SERÁ ATRIBUIDO AOS VOTOS NULOS" << endl;
        presidente.set_candidato_nulo(!atributos.candidato_apto);
      }

      interacao = confirma_voto();
      presidente.set_candidato_branco(false);
    }
    else
    {
      bool confirma;
      confirma = confirmacao();
      if(confirma)
      {
        interacao = false;
        presidente.set_candidato_branco(true);
      }
      else
      {
        system("clear");
      }
    }
  }


  system("clear");
  return presidente;

}

bool confirma_voto()
{
  bool confirma, interacao = true;
  confirma = confirmacao();

  if(confirma)
  {
    interacao = false;
  }
  else
  {
    system("clear");
  }
  return interacao;
}
