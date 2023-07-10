typedef struct aluno{
    int matricula;
    float n1,n2,n3;
}ALUNO;

typedef struct elemento* LISTA;

LISTA *criarLista();

void apagaLista(LISTA *li);

int tamLista(LISTA *li);

int listaCheia(LISTA *li);

int listaVazia(LISTA *li);

int insere_inicio_lista(LISTA *li, ALUNO al);

int insere_final_lista(LISTA *li, ALUNO al);

int insere_lista_ordenada(LISTA *li, ALUNO al);

int remove_inicio_lista(LISTA *li);

int remove_final_lista(LISTA *li);

int remove_lista(LISTA *li, int mat);

int consulta_lista_pos(LISTA *li, int posicao, ALUNO *al);

int consulta_lista_mat(LISTA *li, int matricula, ALUNO *al);
