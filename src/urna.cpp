#include"../inc/urna.hpp"
#include"../inc/instanciar.hpp"
#define MAX_CANDIDATOS_BR 26
#define MAX_CANDIDATOS_DF 1240

using namespace std;


Candidato interacao_dep(string cargo, string extensao)
{
  Candidato deputado_federal;

  bool interacao;
  interacao = true;
  while(interacao)
  {
    cout << "DIGITE O CODIGO DO SEU CANDIDATO A " << cargo << ": ";

    int codigo;
    codigo = codigo_candidato();

    separa_atributos atributos;
    try
    {
      atributos = instanciar_candidatos(cargo, extensao, to_string(codigo));
    }
    catch(bool e)
    {
      cout << "ERRO AO ABRIR ARQUIVO" << endl;
    }

    deputado_federal.distribuir_atributos(atributos);

    deputado_federal.mostrar_dados();

    bool confirma;
    confirma = confirmacao();

    if(confirma)
    {
      deputado_federal.voto_confirmado();
      interacao = false;
    }
    else
    {
      system("clear");
    }
  }

  system("clear");
  return deputado_federal;

}

bool confirmacao()
{
  cout << "CONFIRA OS DADOS DO SEU CANDIDATO PARA PROSSEGUIR COM A CONFIRMAÇÃO" << endl;
  cout << "DIGITE – CM – PARA CONFIRMAR E – CG – PARA CORRIGIR" << endl;

  string opcao;
  while(true)
  {
    cin >> opcao;
    if(opcao.compare("CM") == 0)
    {
      return true;
    }
    else if(opcao.compare("CG") == 0)
    {
      return false;
    }
    else
    {
      cout << "POR FAVOR, DIGITE APENAS OS CARACTERES ESPECIFICADOS" << endl;
    }
  }
}


int codigo_candidato()
{
  string numero;

  while(true)
  {
    cin >> numero;
    if (numero.compare("BR") == 0)
    {
      cout << "VOTO EM BRANCO" << endl;
      return 0x7FFF;
    }
    else
    {

      try
      {
        return stoi(numero,nullptr,10);
      }

      catch(exception &e){
        cout << "APENAS NÚMEROS SÃO PERMITIDOS!" << endl;
      }
    }
  }
}
