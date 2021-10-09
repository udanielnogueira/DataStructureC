#include <stdio.h>
#include <stdlib.h>
#include "listah.h"

#define RET 1
#define TRI 2
#define CIR 3

int main(void){

	Lista* lst;

	lst = cria_lsth();

	printf("vazia: %d\n", vazia_lsth(lst) );

	lst = insereT_lsth(lst, 10.0, 20.0 );
	lst = insereR_lsth(lst, 30.0, 40.0 );
	lst = insereC_lsth(lst, 6.0);

	lst = removeR_lsth(lst, 30.0, 40.0);


	imprime_lsth(lst);

	libera_lsth(lst);

	system("pause");

	return 0;
}