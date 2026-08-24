#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	printf("\n================= EXERCICIO 1 SK =================\n");
	int idade, anoatual, ano;
	anoatual = 2026;
	
	printf("Qual sua idade? \n");
	scanf("%d0", &idade);
	
	ano = (anoatual - idade);
	
	printf("\nVoce nasceu em %d", ano);
	
	return 0;
}
