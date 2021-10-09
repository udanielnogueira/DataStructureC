#include <stdio.h>

int fatIterativo(int);

int main(void){

    int n=0, resultado=0;

    printf("Digite um numero para descobrir o fatorial: ");
    scanf("%d", &n);
    resultado = fatIterativo(n);
    printf("Resultado: %d\n", resultado);

    return 0;
}

int fatIterativo(int n){

	int f;
	for(f=n-1; f>0; f--)
		n*=f;
	return n;
}