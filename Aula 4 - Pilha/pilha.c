#include <stdio.h>
#include <stdlib.h>  // Para o uso de malloc e free

// Definindo a estrutura de um nó da pilha
struct Node {
   int data;            // Valor armazenado no nó
   struct Node* next;   // Ponteiro para o próximo nó
};

// Função para empilhar (push) um elemento na pilha
void push(struct Node** top_ref, int new_data) { //defininfo uma função chamada push
   // Aloca memória para o novo nó
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
   if (new_node == NULL) {
       printf("Erro de alocação de memória\n");
       return;
   }
   // Atribui o valor ao novo nó e ajusta o ponteiro next
   new_node->data = new_data;
   new_node->next = (*top_ref);  // O novo nó aponta para o nó que era o topo

   // Atualiza o topo da pilha
   (*top_ref) = new_node;
   printf("%d empilhado na pilha\n", new_data);
}

// Função para desempilhar (pop) um elemento da pilha
int pop(struct Node** top_ref) {
   int popped_value;
   struct Node* temp;
   // Verifica se a pilha está vazia
   if (*top_ref == NULL) {
       printf("Pilha vazia, nada para desempilhar\n");
       return -1;  // Retorna -1 para indicar falha
   }
   // Armazena o nó do topo temporariamente e ajusta o ponteiro top
   temp = *top_ref;
   popped_value = temp->data;
   *top_ref = temp->next;
   // Libera a memória do nó removido
   free(temp);
   printf("%d desempilhado da pilha\n", popped_value);
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
       printf("%d -> ", top->data);
       top = top->next;
   }
   printf("NULL\n");
}

int main() {
   struct Node* top = NULL;  // Inicializa o topo da pilha como NULL
   push(&top, 1);  // Empilha 1
   push(&top, 2);  // Empilha 2
   push(&top, 3);  // Empilha 3
   display(top);   // Exibe o conteúdo da pilha
   pop(&top);      // Desempilha 3
   display(top);   // Exibe o conteúdo da pilha
   pop(&top);      // Desempilha 2
   display(top);   // Exibe o conteúdo da pilha
   pop(&top);      // Desempilha 1
   display(top);   // Exibe o conteúdo da pilha
   pop(&top);      // Tenta desempilhar de uma pilha vazia
}

