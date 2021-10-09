#include <stdio.h>
#include <stdlib.h>
#include "listate.h"

int main(void){

	Lista* lst;
	lst = cria_lstte();


	printf("vazia: %d\n", vazia_lstte(lst));

	lst = insere_lstte(lst, 10, 20);
	lst = insere_lstte(lst, 2, 5);
	lst = insere_lstte(lst, 7, 5);

	lst = busca_lstte(lst, 2, 5);

	lst = remove_lstte(lst, 2, 5);

	imprime_lstte(lst);

	printf("vazia: %d\n", vazia_lstte(lst));

	libera_lstte(lst);

	system("pause");

	return 0;

}