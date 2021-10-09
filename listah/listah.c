#include <stdio.h>
#include <stdlib.h>
#include "listah.h"

#define RET 1
#define TRI 2
#define CIR 3

typedef struct retangulo Retangulo;
struct retangulo{
	float b, h;
};

typedef struct triangulo Triangulo;
struct triangulo{
	float b, h;
};

typedef struct circulo Circulo;
struct circulo{
	float r;
};

typedef struct lista Lista;
struct lista{
	void* info;
	Lista* prox;
	int tipo;
};

Lista* cria_lsth(void){
	return NULL;
}

void libera_lsth(Lista* lst){
	Lista* p;
	p=lst;
	
	while(p!=NULL){
		Lista* t = p->prox;
		free(p);
		p=t;
	}
}

int vazia_lsth(Lista* lst){
	return (lst==NULL);
}

Lista* insereR_lsth(Lista* lst, float b, float h){

	Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));       
	Lista* p = (Lista*) malloc(sizeof(Lista));

	r->b = b;
	r->h = h;
	p->tipo = RET;
	p->info = r;
	p->prox = lst;


	return p;
}

Lista* insereT_lsth(Lista* lst, float b, float h){

	Triangulo* t = (Triangulo*) malloc(sizeof(Triangulo));
	Lista* p = (Lista*) malloc(sizeof(Lista));
	
	t->b = b;
	t->h = h;
	p->tipo = TRI;
	p->info = t;
	p->prox = lst;

	return p;
}

Lista* insereC_lsth(Lista* lst, float r){

	
	Circulo* c = (Circulo*) malloc(sizeof(Circulo));
	Lista* p = (Lista*) malloc(sizeof(Lista));

	c->r = r;
	p->tipo = CIR;
	p->info =  c;
	p->prox = lst;

	return p;
}

void imprime_lsth(Lista* lst){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->tipo==TRI)
			printf("base: %.2f altura: %.2f\n", ( (Triangulo*) (p->info) )->b, ( (Triangulo*)(p->info) )->h);
		else if (p->tipo==RET)
			printf("base: %.2f altura: %.2f\n", ( (Retangulo*) (p->info) )->b, ( (Retangulo*)(p->info) )->h);
		else
			printf("raio: %.2f\n", ( (Circulo*)(p->info) )->r);
	}
}

Lista* buscaR_lsth(Lista* lst, float b, float h){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->tipo==RET)
			//caso haja um TRI de mesmo valor
			if( ( (Retangulo*)(p->info) )->b == b && ( (Retangulo*)(p->info) )->h == h)
				return p;
	}
	return NULL;
}

Lista* buscaT_lsth(Lista* lst, float b, float h){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->tipo==TRI)
			if( ( (Triangulo*)(p->info) )->b == b && ( (Triangulo*)(p->info) )->h == h)
				return p;
	}
	return NULL;
}

Lista* buscaC_lsth(Lista* lst, float r){

	Lista* p;
	for(p=lst; p!=NULL; p=p->prox){
		if(p->tipo==CIR)
			if( ( (Circulo*)(p->info) )->r == r)
				return p;
	}
	return NULL;
}

Lista* removeR_lsth(Lista* lst, float b, float h){

	Lista* p = lst;
	Lista* ant = NULL;

		while(p!=NULL && ((Retangulo*) (p->info))->b!=b && ((Retangulo*) (p->info))->h!=h && p->tipo!=RET){
			ant = p;
			p=p->prox;
		}
	

		if(p==NULL)
			return lst;
		
		if(ant==NULL){
			lst=p->prox;
		}
		else{
			ant->prox=p->prox;
		}

	free(p);
	return lst;

}

Lista* removeT_lsth(Lista* lst, float b, float h){

	Lista* p = lst;
	Lista* ant = NULL;

		while(p!=NULL && ((Triangulo*) (p->info))->b!=b && ((Triangulo*) (p->info))->h!=h && p->tipo!=TRI){
			ant = p;
			p=p->prox;
		}
	

		if(p==NULL)
			return lst;
		
		if(ant==NULL){
			lst=p->prox;
		}
		else{
			ant->prox=p->prox;
		}

	free(p);
	return lst;

}

Lista* removeC_lsth(Lista* lst, float r){

	Lista* p = lst;
	Lista* ant = NULL;

		while(p!=NULL && ((Circulo*) (p->info))->r!=r && p->tipo!=CIR){
			ant = p;
			p=p->prox;
		}
	

		if(p==NULL)
			return lst;
		
		if(ant==NULL){
			lst=p->prox;
		}
		else{
			ant->prox=p->prox;
		}

	free(p);
	return lst;

}