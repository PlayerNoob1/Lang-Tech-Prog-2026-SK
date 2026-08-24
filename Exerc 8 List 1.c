#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>

int main(int argc, char *argv[]) {

	printf("=================EXERCICIO 8 SK=================\n");
	
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
	
		
	return 0;
}
