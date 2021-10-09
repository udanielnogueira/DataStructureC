#include <stdio.h>

int fatNormal(int);

int main(void){

    int n=0, resultado=0;

    printf("Digite um numero para descobrir o fatorial: ");
    scanf("%d", &n);
    resultado = fatNormal(n);
    printf("Resultado: %d\n", resultado);

    return 0;
}

fatNormal(int n){

	int f=n;
	int i;
	for(i=n-1; i>0; i--)
		f *= i;
	return f;
}