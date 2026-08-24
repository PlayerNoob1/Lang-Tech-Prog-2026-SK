#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>

int main(int argc, char *argv[]) {
	
	printf("=================EXERCICIO 2 SK=================\n");
	
	double valor, base;
	int expoente;

	printf("\nInsira um valor positivo: ");
	scanf("%lf", &valor);//limitado a 6 casa decimais.

	base = valor;
	expoente = 0;

	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	
	printf("\nEm notacao cientifica: %.6f x 10^%d\n", base, expoente);

return 0;
}
