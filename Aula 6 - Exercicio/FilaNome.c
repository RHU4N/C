#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura de um nó da fila
struct Node {
    char *data;            // Valor armazenado no nó
    struct Node *next;     // Ponteiro para o próximo nó
};
typedef struct Node Node;

struct Fila {
    Node *begin;
    Node *end;
};
typedef struct Fila Fila;

// Cria uma nova fila
Fila* create() {
    Fila* vfl = (Fila*) malloc(sizeof(Fila));
    if (vfl != NULL) {
        vfl->end = NULL;
        vfl->begin = NULL;
    }
    return vfl;
}

// Função para inserir um elemento na fila
void push(Fila *vfl) {
    Node* new = (Node*) malloc(sizeof(Node));
    new->data = (char*) malloc(100 * sizeof(char)); // Aloca memória para a string

    printf("Digite o nome a ser inserido na fila: ");
    scanf("%s", new->data);
    new->next = NULL;

    if (vfl->begin == NULL) {
        vfl->begin = new;
        vfl->end = new;
    } else {
        vfl->end->next = new;
        vfl->end = new;
    }
    printf("\nNome inserido na fila!\n");
}

// Função para exibir a fila
void get_fila(Fila *vfl) {
    Node *aux = vfl->begin;
    if (aux == NULL) {
        printf("\nFila Vazia!!\n");
    } else {
        printf("Conteúdo da fila: ");
        while (aux != NULL) {
            printf(" %s ", aux->data);
            aux = aux->next;
        }
        printf("\n");
    }
}

// Função para remover um elemento da fila
char* pop(Fila *vfl) {
    if (vfl->begin == NULL) {
        printf("\nFila Vazia!!\n");
        return NULL;
    } else {
        Node *aux = vfl->begin;
        char *removed_value = aux->data; // Guarda o valor removido
        printf("%s removido!\n", removed_value);
        vfl->begin = vfl->begin->next;
        free(aux);
        return removed_value;
    }
}

// Função principal
int main() {
    Fila *vfl = create();
    for (int i = 0; i < 10; i++) { // Alterado de i == 10 para i < 10
        push(vfl);
    }
    get_fila(vfl);

    // Remover todos os elementos da fila
    while (vfl->begin != NULL) {
        pop(vfl);
    }

    // Liberar a memória da fila
    free(vfl);
    return 0;
}
