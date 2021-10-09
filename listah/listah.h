typedef struct retangulo Retangulo;
typedef struct triangulo Triangulo;
typedef struct circulo Circulo;
typedef struct lista Lista;

Lista* cria_lsth(void);
void libera_lsth(Lista* lst);

Lista* insereR_lsth(Lista* lst, float b, float h);
Lista* insereT_lsth(Lista* lst, float b, float h);
Lista* insereC_lsth(Lista* lst, float r);

Lista* removeR_lsth(Lista* lst, float b, float h);
Lista* removeT_lsth(Lista* lst, float b, float h);
Lista* removeC_lsth(Lista* lst, float r);

void imprime_lsth(Lista* lst);

Lista* buscaR_lsth(Lista* lst, float b, float h);
Lista* buscaT_lsth(Lista* lst, float b, float h);
Lista* buscaC_lsth(Lista* lst, float r);

int vazia_lsth(Lista* lst);



