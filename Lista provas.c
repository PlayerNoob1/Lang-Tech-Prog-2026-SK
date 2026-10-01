#include <stdio.h>
#include <stdlib.h>

	void exe1 (){	
		float peso, altura, imc;
		
		printf ("\n====================== Exercicio 1 - IMC ======================\n");
		printf ("Qual e o seu Peso? \n");
		scanf ("%f", &peso);
	
		printf ("Qual e a sua Altura? \n");
		scanf ("%f", &altura);	
	
		imc = (peso/(altura*altura));
		printf ("Seu IMC: %.1f", imc);

			if (imc < 18.5) {
			printf ("\nvoce esta Abaixo do Peso");
			}
			else if (imc >= 18.5 && imc <= 24.9) {
			printf ("\nvoce esta Normal");
			}
			else if (imc >= 25.0 && imc <= 29.9) {
			printf ("\nVoce esta Acima do Peso");
			}
			else{
			printf ("\nVoce esta Obeso");
			}
	}
			
	void exe2 (){	
		int a, b, c;
		
		printf("====================== Exercicio 2 - Torre Hanoi ======================")
		a = 6;
		b = 0;
		c = 0;
		
		print("Etapa 1: Disco menor em C\n");
		a - 1; //A agora é 5
		c + 1; //C agora é 1
		print("A = %d, B = %d, C = %d\n", a, b, c);
	
		print("Etapa 2: Disco medio em B\n");
		a - 2; //A agora é 3
		b + 2; //B agora é 2
		print("A = %d, B = %d, C = %d\n", a, b, c);
	
		print("Etapa 3: Disco menor em B\n");
		c - 1; //C agora é 0
		b + 1; //B agora é 3
		print("A = %d, B = %d, C = %d\n", a, b, c);
	
		print("Etapa 4: Disco maior em C\n");
		a - 3; //A agora é 0
		c + 3; //C agora é 3
		print("A = %d, B = %d, C = %d\n", a, b, c);
	
		print("Etapa 5: Disco menor em A\n");
		a + 1; //A agora é 5
		B - 1; //C agora é 1
		print("A = %d, B = %d, C = %d\n", a, b, c);
		
		print("Etapa 6: Disco medio em C\n");
		B - 2; //B agora é 0
		C - 2; //C agora é 5
		print("A = %d, B = %d, C = %d\n", a, b, c);
		
		print("Etapa 7: Disco menor em C\n");
		a - 1; //A agora é 0
		c + 1; //C agora é 6
		print("A = %d, B = %d, C = %d\n", a, b, c);
		
	}			
			
			
	int main(int argc, char *argv[]) {
		
	printf("=======================================\n");
	printf("|          MENU DE EXERCÍCIOS         |\n");
	printf("=======================================\n");
	
	
	printf("\n---> Exercicios Disponiveis: \n");
	
	printf("Exercicio 0 ");
	printf("\nExercicio 1 ");
	printf("\nExercicio 2\n ");
	
	int op;
	printf("\nInforme qual exercicio voce quer realizar: ");
	scanf("%d", &op);
	
	switch (op){		
		case 1:{			
			exe1 ();
		break;
		}
		case 2:{
			exe2 ();
		break;
		}
	}
	
	return 0;
}


//ESTA COM ERROS!!!!
