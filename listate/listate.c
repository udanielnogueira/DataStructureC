#include <stdio.h>
#include <stdlib.h>
#include "listate.h"


typedef struct retangulo Retangulo;
struct retangulo{

	float base;
	float altura;
};

typedef struct lista Lista;
struct lista{

	Retangulo* info;
	Lista* prox;
};

Lista* cria_lstte(void){

	return NULL;
}

void libera_lstte(Lista* lst){

	Lista* p;
	p=lst;
	while(p!=NULL){
		Lista* t = p->prox;
		free(p);
		p=t;
	}
}

int vazia_lstte(Lista* lst){

	return (lst == NULL);
	
}

Lista* insere_lstte(Lista* lst, float base, float altura){

	Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
	Lista* p = (Lista*) malloc(sizeof(Lista));

	r->base = base;
	r->altura = altura;

	p->info = r;
	p->prox = lst;

	//lst=p; seria redundancia, estou fazendo isso na main

	return p;
}

Lista* remove_lstte(Lista* lst, float base, float altura){

	Lista* p = lst;
	Lista* ant = NULL;

	while(p!=NULL && p->info->base!=base && p->info->altura != altura){

		ant = p;
		p = p->prox;
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

Lista* imprime_lstte(Lista* lst){

	Lista* p;

	if(lst==NULL)
		printf("lista vazia\n");
	for(p=lst; p!=NULL; p=p->prox)
		printf("base: %.2f altura: %.2f\n", p->info->base, p->info->altura);

}

Lista* busca_lstte(Lista* lst, float base, float altura){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->info->base==base && p->info->altura == altura)
			return p;
	}
	return NULL;
}
