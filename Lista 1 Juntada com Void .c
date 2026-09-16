#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>


//=======| Exercício 1 Lista 1 |=======
void exe1 (){
	int primeiro, segundo, AUX;
	printf("=================| EXERCICIO 1 |=================\n");
	
	printf("\nInsira um numero: ");
	scanf("%d", &primeiro);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &segundo);
	
	AUX = primeiro;
	primeiro = segundo; 
	segundo = AUX;
	
	printf("A ordem inversa deles sao %d e %d", primeiro, segundo);
	
}

//=======| Exercício 2 Lista 1 |=======
void exe2 (){
  printf("=================| EXERCICIO 2 |=================\n");
	
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

}

//=======| Exercício 3 Lista 1 |=======	
void exe3 (){
	printf("=================| EXERCICIO 3 |=================\n");

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

}

//=======| Exercício 4 Lista 1 |=======
	void exe4 (){	
  printf("=================| EXERCICIO 4 |=================\n");

	float fixo, venda, vendas, comissao, lucro, c;

	fixo = 1000;
	comissao = 0.15;
	vendas = 200 * comissao;

	printf("\nInsira a quantidade de vendas: ");
	scanf("%f", &venda);

	c = (vendas * venda);
	lucro = fixo + c;

	printf("\nO valor no final do mes sera de: %.2f", lucro);

}

//=======| Exercício 5 Lista 1 |=======
void exe5 (){
  printf("=================| EXERCICIO 5 |=================\n");

  int m, s, p, valor1, valor2, valor3, valor4, v1, v2, v3, v4, i;
	
	printf("\nInforme um valor de 1 ate 6: ");
	scanf("%d", &valor1);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor2);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor3);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor4);

	s = valor1 + valor2 + valor3 + valor4;
	m = s / 4; 
	p = valor1 * valor2 * valor3 * valor4;

	printf("\nA soma dos valores é: %d", s);
	printf("\nA media dos valores é: %d", m);
	printf("\nO produtorio do primeiro e de %d ", p); 	

}
//=======| Exercício 6 Lista 1 |=======
void exe6 (){
  printf("\n================| Exercicio 6 |================\n");
	
	int ano, meses, dias;
    printf("Digite sua idade: ");
    scanf("%d", &ano);
    meses = ano*12;
    dias = ano*365;
	printf("Sua idade em anos: %d\n", ano);
	printf("Sua idade em meses: %d\n", meses);
    printf("Sua idade em dias: %d\n", dias);

}

//=======| Exercício 7 Lista 1 |=======
void exe7 (){
  printf("\n================| Exercicio 7 |================\n");
	
	float r, volume, pi=3.14159;
	
	printf("\nInforme o raio para o calculo: ");
	scanf("%f", &r);
	
	volume = (4/3.0) * pi * (r*r*r);
	
	printf("\nO volume e de %f", volume);
  
}

//=======| Exercício 8 Lista 1 |=======
void exe8 (){
  printf("=================| EXERCICIO 8 |=================\n");
	
	int x1, x2, y1, y2, p1, p2;
	float dis; 
	
	printf("\nInsira o valor do par ordenado p1(x1,y1)");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("\nInsira o valor do par ordenado p1(x2,y2)");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	p1 = pow(x2-x1,2);
	p2 = pow(y2-y1,2);
	
	dis = sqrt(p1+p2);
	
	printf("\nA distancia é de %f", dis); 

}

int main(int argc, char *argv[]) {

	printf("=======================================\n");
	printf("|          MENU DE EXERCÍCIOS         |\n");
	printf("=======================================\n");
	
	printf("===> Exercicios Disponiveis: \n");
	
	printf("Exercicio 1 ");
	printf("\nExercicio 2 ");
	printf("\nExercicio 3 ");
	printf("\nExercicio 4 ");
	printf("\nExercicio 5 ");
	printf("\nExercicio 6 "); 
	printf("\nExercicio 7 ");
	printf("\nExercicio 8 ");

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
		case 3:{
				exe3 ();
			break;
		}
		case 4:{
				exe4 ();
			break;
		}
		case 5:{
				exe5 ();
			break;
		}
		case 6:{
				exe6 ();
			break;
		}
		case 7:{
				exe7 ();
			break;
		}
		case 8:{
				exe8 ();
			break;
		}
	}
return 0;
}
