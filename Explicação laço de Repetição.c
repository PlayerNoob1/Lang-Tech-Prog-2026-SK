#include <stdio.h>
#include <stdlib.h>

/*faça um programa que receba 10 numeros do teclado
mostre o maior entre os 5 primeiros e
o menor entre os 5 restantes*/

int compara (int a, int b){
	if(a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valores[10];
	valores[0] = 6;
	int maior, menor, i;

	printf("vamos ler os valores: \n");
	//for(inicialização; verificação; incremento)
	for( i=0; i<10; i++){
		scanf("%d", &valores[i]);	
	}

	for(i=1 , maior=valores[0]; i<5; i=i+2){
		int comp_temp = compara(valores[i],valores[i+1]);
		maior = compara(maior, comp_temp);
	}

	printf("\n %d", maior);
	
	return 0;

}
