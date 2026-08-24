#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>

int main(int argc, char *argv[]) {
		
  printf("=================EXERCICIO 4=================\n");

	float fixo, venda, vendas, comissao, lucro, c;

	fixo = 1000;
	comissao = 0.15;
	vendas = 200 * comissao; //ATRIBUIDO CADA VENDO COMO 200 REAIS.

	printf("\nInsira a quantidade de vendas: ");
	scanf("%f", &venda);

	c = (vendas * venda);
	lucro = fixo + c;

	printf("\nO valor no final do mes sera de: %.2f", lucro);

  return 0
  } 
