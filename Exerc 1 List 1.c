int main(int argc, char *argv[]) {
	
	int primeiro, segundo, AUX;
	
	printf("=================EXERCICIO 1 SK=================\n");
	
	printf("\nInsira um numero: ");
	scanf("%d", &primeiro);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &segundo);
	
	AUX = primeiro;
	primeiro = segundo; 
	segundo = AUX;
	
	printf("A ordem inversa deles sao %d e %d", primeiro, segundo);
	
	return 0;
}
