#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){

	Lista* lst;

	lst = cria_lst();

	printf("vazia: %d\n", vazia_lst(lst));

	lst = insere_lst(lst, 10);
	lst = insere_lst(lst, 20);
	lst = insere_lst(lst, 30);
	lst = insere_lst(lst, 50);
	lst = insere_lst(lst, 60);
	lst = insere_lst(lst, 70);
	lst = insere_lst(lst, 80);
	lst = insere_lst(lst, 90);
	lst = insere_lst(lst, 100);

	lst = busca_lst(lst, 30);

	imprime_lst(lst);

	printf("vazia: %d\n", vazia_lst(lst) );

	libera_lst(lst);

	system("pause");

	return 0;

}