#include <stdio.h>
#include <string.h> // Implementação da função para utilizar o comando "strcpy()"

int main() {

  // Atribuição de variaveis.
  int FilmeEntrada, QuantidadeIngressos, QuantidadeMeia;
  double ValorIngresso, ValorMeia, ValorFinal;
  char FilmeEscolhido[50];
  FilmeEntrada = 0;
  QuantidadeIngressos = 0;
  ValorIngresso = 30.50;
  ValorMeia = 15.25;

  // Simplificação de Código: Para não precisar escrever o nome do filme.
  char Filme1[50] = "Missão Impossível: Acerto de Contas";
  char Filme2[50] = "Barbie";
  char Filme3[50] = "Besouro Azul";
  char Filme4[50] = "Oppenheimer";

  // Texto para o Usuário, explicando como escolher o filme
  printf("      Olá, bem-vindo ao Cinema Odisseia!\n");
  printf("  O ingresso custa R$30,50 cada, apenas pagam meia menores de 10 anos e maiores de 65 anos\n");
  printf("  Escolha o filme que deseja assistir digitando o número do filme:\n");
  printf("\n"); // Uma quebra de linha, para melhor visualização no Console.

  // Código para mostrar os nomes dos filmes.
  printf("1: %s\n", Filme1);
  printf("2: %s\n", Filme2);
  printf("3: %s\n", Filme3);
  printf("4: %s\n", Filme4);

  // Código para determinar qual filme o Usuário escolheu, ele se repete até o Usuário escolher de forma correta.
  while (FilmeEntrada <= 0 || FilmeEntrada > 4) {

    // Início do While sobre Filme.

    // Entrada de dados = Escolha do filme.
    scanf("%d", &FilmeEntrada);

    if (FilmeEntrada == 1) {
      printf("Você selecionou o filme: %s\n", Filme1);
      strcpy(FilmeEscolhido,Filme1); 
      // ^^ Função para copiar uma string para outra, é necessário implementar a biblioteca '<string.h>'.
    }

    if (FilmeEntrada == 2) {
      printf("Você selecionou o filme: %s\n", Filme2);
      strcpy(FilmeEscolhido, Filme2);
    }

    if (FilmeEntrada == 3) {
      printf("Você selecionou o filme: %s\n", Filme3);
      strcpy(FilmeEscolhido, Filme3);
    }

    if (FilmeEntrada == 4) {
      printf("Você selecionou o filme: %s\n", Filme4);
      strcpy(FilmeEscolhido, Filme4);
    }

    if (FilmeEntrada <= 0 || FilmeEntrada > 4) {
      printf("Opção invalida, tente novamente.\n");
    }
    // Fim do While sobre Filme.
  }

  // Código para determinar a quantidade de ingressos e a quantidade de meia entrada, o código se repete até o Usuário inserir os valores corretos.
  while (QuantidadeIngressos <= 0 || QuantidadeIngressos < QuantidadeMeia) {

    // Início do While sobre Ingressos.

    printf("\n"); // Outra quebra de linha.
    printf("Quantos ingressos são necessários? (Digite um número)\n");

    // Entrada de dado = Quantidade de ingressos.
    scanf("%d", &QuantidadeIngressos);

    // Código que valida a quantidade de ingressos.
    if (QuantidadeIngressos <= 0) {
      printf("Quantidade invalida, tente novamente.\n");
    }
    if (QuantidadeIngressos > 0) {

      printf("\n");
      printf("Quantas pessoas são menores de 10 anos ou maiores de 65 anos? (Digite um número)\n");

      // Entrada de dado = Quantidade de meia entradas.
      scanf("%d", &QuantidadeMeia);

      // Código que verifica se a quantidade de ingressos é menor do que a quantidade de meia entrada.
      if (QuantidadeIngressos < QuantidadeMeia) {
        printf("Quantidade de Ingresso é menor do que a quantidade de meia entrada, tente novamente.\n");
      }
    }
    // Fim do While sobre Ingressos.
  }
  // Calculo para confirmar o valor final dos ingressos.
  ValorFinal = (QuantidadeIngressos * ValorIngresso) - (QuantidadeMeia * ValorMeia);

  // Saída de dados com todas as informações fornecidas mais o valor final dos ingressos.
  printf("\n");
  printf("Quantidade de Ingressos: %d\n", QuantidadeIngressos);
  printf("Quantidade de meia entrada: %d\n", QuantidadeMeia);
  printf("Filme Escolhido: %s\n", FilmeEscolhido);
  printf("O valor total a ser pago é de: %.2f\n", ValorFinal);

  return 0;
}
