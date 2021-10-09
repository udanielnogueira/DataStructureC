#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista Lista; 
struct lista
{
	int info;
	Lista* prox;
};

Lista* cria_lst(void){
	
	return NULL;
}
void libera_lst(Lista* lst){

	Lista* p;
	p=lst;
	while(p!=NULL){
		Lista* t = p->prox;
		free(p);
		p = t;
	}
}

void imprime_lst(Lista* lst){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		printf("info: %d\n", p->info);
		
		/*
		imprime de dois em dois
		p=p->prox;
		if(p==NULL)
			break;
		*/
	}
}

Lista* busca_lst(Lista* lst, int valor){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->info == valor)
			return p;
	}
	return NULL;
}


int vazia_lst(Lista* lst){

	return (lst == NULL);
}


Lista* insere_lst(Lista* lst, int valor){

	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = valor;
	novo->prox = lst;
	return novo;
}


Lista* remove_lst(Lista* lst, int valor){

	Lista* p = lst;
	Lista* ant = p->prox;

	while(p!=NULL && p->info!=valor){
		ant = p;
		p=p->prox;
	}

	if(p==NULL)
		return lst;

	if(ant==NULL){
		lst = p->prox;
	}
	else{
		ant->prox = p->prox;
	}

	free(p);
	return lst;

}