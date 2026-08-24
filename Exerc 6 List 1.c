#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\n================ Exercicio 6 SK ================\n");
	
	int ano, meses, dias;
    printf("Digite sua idade: ");
    scanf("%d", &ano);
    meses = ano*12;
    dias = ano*365;
	printf("Sua idade em anos: %d\n", ano);
	printf("Sua idade em meses: %d\n", meses);
    printf("Sua idade em dias: %d\n", dias);

	return 0;
}
