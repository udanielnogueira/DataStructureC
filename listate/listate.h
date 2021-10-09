typedef struct retangulo Retangulo;

typedef struct lista Lista;

Lista* cria_lstte(void);

void libera_lstte(Lista* lst);

Lista* insere_lstte(Lista* lst, float base, float altura);

Lista* remove_lstte(Lista* lst, float base, float altura);

Lista* imprime_lstte(Lista* lst);

Lista* busca_lstte(Lista* lst, float base, float altura);

int vazia_lstte(Lista* lst);

