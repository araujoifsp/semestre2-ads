typedef struct cliente{
    int codigo;
    char nome[50];
    char empresa[50];
    char departamento[30];
    char telefone[13];//formato: (00)0000-0000
    char celular[14];//formato: (00)90000-0000
    char email[30];
}CLI;

typedef struct elemento* LISTA;

int menu();

LISTA *criarLista();

int insere_lista(LISTA *li, CLI cl);

int remove_lista(LISTA *li, int cod);

int consulta_lista_cod(LISTA *li, int cod, CLI *cl);

int consulta_lista_nome(LISTA *li, char nome[50], CLI *cl);

int tamLista(LISTA *li);

int listaVazia(LISTA *li);

int consulta_lista_pos(LISTA *li, int posicao, CLI *cl);

void grava(FILE *f, LISTA *li);

void salva(FILE *f, LISTA *li);

int edita_lista(LISTA *li, int cod, CLI *cl);
