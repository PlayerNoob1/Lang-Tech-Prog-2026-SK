#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>

int main(int argc, char *argv[]) {
		
	printf("=================EXERCICIO 3=================\n");

	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

	printf("Insira o valor para a conversao: ");
	scanf("%d", &n);

	bit_64 = n % 2;
	res = n / 2;

	bit_32 = res % 2;
	res = res / 2;

	bit_16 = res % 2;
	res = res / 2;

	bit_8 = res % 2;
	res = res / 2;

	bit_4 = res % 2;
	res = res / 2;

	bit_2 = res % 2;
	res = res / 2;

	printf("\nO valor dele em binario e %d%d%d%d%d%d%d\n", res % 2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
  
	return 0;
}
