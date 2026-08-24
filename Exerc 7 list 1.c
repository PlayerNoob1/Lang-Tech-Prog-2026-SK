#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\n================ Exercicio 7 SK ================\n");
	
	float raio, r3, volume;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    r3 = pow(raio, 3);
    volume = (4/3.0) * pi * r3;
    printf("O volume da esfera é: %.2f\n", volume);

    return 0
}
