# Exercícios Online

**Conteúdo da Disciplina**: Grafos 2<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 21/1030729  |  Eric Rabelo Borges |
| 19/0058455  |  Mariana Oliveira Pires do Rio |

## Sobre 
Este projeto contém as resoluções de exercícios de Juiz Online que envolvem os seguintes algoritmos: Djikstra e Prim. 

### Exercício 1:  [Foreign Friends](https://atcoder.jp/contests/abc245/tasks/abc245_g)

Neste algoritmo, há N pessoas pertencentes a K nações, sendo algumas delas populares. Inicialmente, ninguém é amigo de ninguém. Mediante o pagamento de um custo, Takahashi pode tornar amigos dois indivíduos. O desafio é determinar se cada pessoa pode se tornar amigo de um popular de uma nação diferente e, caso possível, encontrar o custo mínimo necessário para fazê-lo. O algoritmo utiliza uma abordagem baseada em Dijkstra e operações de fila de prioridade para calcular os custos mínimos de amizade, considerando nacionalidades e amizades já existentes. Ao final, ele fornece o custo mínimo para tornar cada pessoa uma amiga indireta de um popular de uma nação diferente, e os resultados são impressos.

Confira o enunciado do exercício [aqui](https://atcoder.jp/contests/abc245/tasks/abc245_g)

- [Ir para solução](Soluções/ForeignFriends.cpp)

### Exercício 2: [Help the king](https://www.spoj.com/problems/IITKWPCG/)

Neste conto, um rei busca reconstruir as estradas de seu país após um ataque inimigo. O desafio reside no fato de que o custo de reparo é baseado em multiplicação e deve ser expresso em potências de dois, de acordo com regras contratuais. Para minimizar os gastos, ele utiliza o algoritmo de Prim para encontrar uma árvore geradora mínima do grafo das cidades. Após calcular o custo total de reparo e convertê-lo em sua forma em potência de dois, o rei procura determinar quantos divisores esse valor possui, representando as diferentes maneiras de expressar o custo. Essa abordagem é aplicada a vários casos de teste com diferentes configurações de cidades e estradas danificadas.

Confira o enunciado do exercício [aqui](https://www.spoj.com/problems/IITKWPCG/)

- [Ir para solução](Soluções/HelpTheKing.cpp)

### Exercício 3:  [Jzzhu and Cities](https://codeforces.com/problemset/problem/449/B)

Neste exercício, o desafio é determinar o número máximo de rotas de trem que podem ser desativadas no país A, mantendo inalterado o comprimento dos caminhos mais curtos de todas as cidades para a capital, dadas as conexões entre cidades por estradas e rotas de trem, bem como seus comprimentos associados. O objetivo é otimizar a economia de recursos, garantindo que a acessibilidade entre as cidades e a capital permaneça a mesma, com base na topologia do grafo.

Confira o enunciado do exercício [aqui](https://codeforces.com/problemset/problem/449/B)

- [Ir para solução](Soluções/JzzhuAndCities.cpp)

### Exercício 4:  [Travel by Car](https://atcoder.jp/contests/abc143/tasks/abc143_e)

Neste cenário, Takahashi precisa navegar entre N cidades por meio de M estradas em seu carro, que tem um tanque de combustível com capacidade máxima de L litros, consumindo um litro por unidade de distância percorrida. Ao visitar cidades, ele pode reabastecer o tanque, mas não pode ficar sem combustível no meio da estrada. O desafio é processar Q consultas, cada uma com cidades de partida e destino, determinando o número mínimo de recargas de combustível necessárias para viajar de s para t. Se a cidade de destino for inalcançável a partir da cidade de partida, a resposta é -1. O algoritmo usa Dijkstra para calcular os caminhos mais curtos considerando as restrições de combustível e recargas do tanque, fornecendo a solução para cada consulta com base nos caminhos previamente calculados.

Confira o enunciado do exercício [aqui](https://atcoder.jp/contests/abc143/tasks/abc143_e)

- [Ir para solução](Soluções/TravelByCar.cpp)

## Screenshots

### Foreign Friends
![](Assets/ForeignFriends.png)

### Help The King
![](Assets/HelpTheKing.png)

### Jzzhu and Cities
![](Assets/JzzhuAndCities.png)

### Travel by Car
![](Assets/Travel.png)

## Instalação 
Não é necessario instalação. As soluções podem ser submetidas nos sites: [AtCoder](https://atcoder.jp/), [Codeforces](https://codeforces.com/) e [SPOJ](https://www.spoj.com/).

**Linguagem**: C++<br>

## Apresentação
Assista o vídeo explicativo do projeto clicando [aqui](/Apresentação.mp4). <br>
*Observação: A apresentação está em formato .mp4, portanto, faça o download para assisti-la.*



