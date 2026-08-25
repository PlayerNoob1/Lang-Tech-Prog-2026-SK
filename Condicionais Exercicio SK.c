#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* Apague está linha
    //========== Exemplo de condicionais ==========//
	int a, b, c;
	int resultado;
	
	printf("Insira o valores de A, B e C: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a>b){
		resultado = a;
	}
	
	else {
		resultado = b;
	}
	
	if (c>resultado){
		resultado = c;
	}
	
	printf("%d e o maior numero", resultado);
	
	
	//====================//
	Apague está linha */
	
	
	printf ("================ Exercicio condicionais SK ================\n");
	int n, r;
	
	printf("Digite seu numero:\n");
	scanf ("%d", &n);

	if (n>0){
        r = n*-1;
	}else{
		r = n*n;
	}
	printf("%d", r);
	
	return 0;
}
