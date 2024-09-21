#include <stdio.h>
#include <stdlib.h>  // Para o uso de malloc e free
#include <string.h>  // Para o uso de strcpy

// Definindo a estrutura de um nó da pilha
struct Node {
    char *data;            // Valor armazenado no nó
    struct Node* next;     // Ponteiro para o próximo nó
};

// Função para empilhar (push) um elemento na pilha
void push(struct Node** top_ref, char* new_data) {
    // Aloca memória para o novo nó
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Erro de alocação de memória\n");
        return;
    }
    
    // Aloca memória para a nova string e copia o conteúdo
    new_node->data = (char*)malloc(strlen(new_data) + 1);
    if (new_node->data == NULL) {
        printf("Erro de alocação de memória para os dados\n");
        free(new_node);
        return;
    }
    strcpy(new_node->data, new_data);
    
    // Ajusta o ponteiro next
    new_node->next = (*top_ref);  // O novo nó aponta para o nó que era o topo

    // Atualiza o topo da pilha
    (*top_ref) = new_node;
    printf("%s empilhado na pilha\n", new_data);
}

// Função para desempilhar (pop) um elemento da pilha
char* pop(struct Node** top_ref) {
    char *popped_value;
    struct Node* temp;

    // Verifica se a pilha está vazia
    if (*top_ref == NULL) {
        printf("Pilha vazia, nada para desempilhar\n");
        return NULL;  // Retorna NULL para indicar falha
    }

    // Armazena o nó do topo temporariamente e ajusta o ponteiro top
    temp = *top_ref;
    popped_value = temp->data;
    *top_ref = temp->next;

    // Libera a memória do nó removido
    free(temp);
    printf("%s desempilhado da pilha\n", popped_value);
    return popped_value;
}

// Função para exibir o conteúdo da pilha
void display(struct Node* top) {
    if (top == NULL) {
        printf("Pilha vazia\n");
        return;
    }
    printf("Conteúdo da pilha: ");
    while (top != NULL) {
        printf("%s -> ", top->data);
        top = top->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* stack = NULL;  // Inicializa a pilha vazia
    char nome[100];
    int d = 0;
    
    do {
        printf("Escreva um nome para a pilha: ");
        scanf("%s", nome);
        push(&stack, nome);  // Passa a string diretamente

        printf("Deseja continuar (s(0)/n(1))? ");
        scanf("%d", &d);
    } while (d == 0);
    
    display(stack);
    
    // Liberar a memória da pilha
    while (stack != NULL) {
        pop(&stack);
    }

    return 0;
}
