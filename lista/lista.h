typedef struct lista Lista;

Lista* cria_lst(void);
void libera_lst(Lista* lst);

Lista* insere_lst(Lista* lst, int valor);
Lista* remove_lst(Lista* lst, int valor);

void imprime_lst(Lista* lst);
Lista* busca_lst(Lista* lst, int valor);

int vazia_lst(Lista* lst);