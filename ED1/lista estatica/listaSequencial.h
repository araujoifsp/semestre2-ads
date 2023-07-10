#define MAX 100

struct aluno{
    int matricula;
    float n1, n2, n3;
};

typedef struct lista LISTA;

LISTA *cria_lista();

void libera_lista(LISTA *li);

int tamanho_lista(LISTA *li);

int lista_cheia(LISTA *li);

int lista_vazia(LISTA *li);

int insere_lista_final(LISTA *li, struct aluno al);

int insere_lista_inicio(LISTA *li, struct aluno al);

int insere_lista_ordenada(LISTA *li, struct aluno al);

int remove_lista_final(LISTA *li);

int remove_lista_inicio(LISTA *li);

int remove_lista(LISTA *li, int matricula);

int consulta_lista_pos(LISTA * li, int pos, struct aluno *al);

int consulta_lista_mat(LISTA * li, int mat, struct aluno *al);
