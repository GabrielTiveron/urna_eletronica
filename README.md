# Exercício de Programação 1

Acesse a descrição completa deste exercício na [wiki](https://gitlab.com/oofga/eps_2018_2/ep1/wikis/Descricao)

## Como usar o projeto
Ao executar o projeto da urna eletrônica será solicitada a quantidade de eleitores que irão votar. Após isto se dará inicio ao laço de votação,
sendo sua ordem a seguinte: Nome do eleitor, Deputado Federal, Deputado Distrital, Senador (1˚opção), Senador(2˚opção), Governador e, por fim, Presidente.
Tendo todos os eleitores concluído seu votos, será apresentado um relatório com o nome do eleitor e seus candidatos votados para cada cargo, além disso,
os vencedores da votação de cada cargo também irão aparecer.
Instrução inicial: ![alt text](https://gitlab.com/GabrielTiveron/ep1/blob/master/Img/Captura%20de%20Tela%202018-10-02%20às%2023.29.19.png "Instrução inicial")
## O projeto se baseia no funcionamento de uma Urna Eletrônica
Estando no loop de votos será solicitado o código de cada candidato, inserindo ao invés do número de seu candidato o texto literal
    "BRANCO"
, seu voto será atribuído aos votos em branco![alt text](https://gitlab.com/GabrielTiveron/ep1/blob/master/Img/Captura%20de%20Tela%202018-10-02%20às%2023.30.07.png "Voto Branco"), essa ação será confirmada apenas após o consentimento do eleitor. Se for identificado um código que não corresponde a nenhum candidato do cargo solicitado, o eleitor será notificado e seu voto será direcionado aos votos nulos![alt text](https://gitlab.com/GabrielTiveron/ep1/blob/master/Img/Captura%20de%20Tela%202018-10-02%20às%2023.29.42.png "Voto Nulo"). A urna também permite que se possa mudar o direcionamento do voto utilizando-se o texto "CORRIGE", para permitir que o código do candidato seja alterado.
## Funcionalidades do projeto
* O projeto detem a capacidade de filtrar grande parte dos textos inseridos para que os mesmos não interfiram no funcionamento da urna;
* Permite Voto Branco, Voto Nulo e Voto Efetivo;
* Lê o arquivo .csv apenas quando o eleitor insere o código de um candidato para ter uma capacidade de processamento melhor;
* Difere os candidatos aptos e inaptos a eleição vigente, sendo os inaptos inelegíveis (votando em um candidato inapto o voto é redirecionado a voto nulo);
![alt text](https://gitlab.com/GabrielTiveron/ep1/blob/master/Img/Captura%20de%20Tela%202018-10-02%20às%2023.31.01.png "Candidato Inapto")
* Ao repetir o voto num mesmo Senador o voto será atribuído como nulo;
![alt text](https://gitlab.com/GabrielTiveron/ep1/blob/master/Img/Captura%20de%20Tela%202018-10-02%20às%2023.30.35.png "Senador nulo")
* A digitação é identificada normalmente com caractéres maiúsculos ou minúsculos, para maior comodidade do usuário;
* Tem completo controle sobre votos NULO's e BRANCO's.

## Bugs e problemas
* Para mostrar os candidatos vencedores é analisado unicamente a quantidade de votos e não outros meios de desempate e etc;
* Ao inserir o número de eleitores como por exemplo '5a' o programa executa normalmente;
* O nome do eleitor é suscetível a ser um número.

## Referências
