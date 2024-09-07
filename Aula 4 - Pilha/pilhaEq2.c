#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // Para o uso de malloc e free
#include <locale.h>

    void delta(a,b,c){
        int delta;
        delta = pow(b,2)-4*a*c;
    if (delta<0)
    {
        printf("Impossivel");
    }else{
        int x1 = (-b+sqrt(delta))/2*a;
        int x2 = (-b-sqrt(delta))/2*a;
        struct Node* stack = NULL;  // Inicializa a pilha vazia
        push(&stack,x1);
        push(&stack,x2);
        display(stack);
    }
    }

// Definindo a estrutura de um nó da pilha
struct Node {
   int data;            // Valor armazenado no nó
   struct Node* next;   // Ponteiro para o próximo nó
};

//Função para empilhar (push) um elemento na pilha
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

int main(){
    int a,b,c;
    printf("-=-=-=-=-=-=-=-=-=-\n");
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    printf("Calculando equação de 2°Grau\n");
    printf("Digite o valor de A\n");
    scanf("%d",&a);
    printf("Digite o valor de B\n");
    scanf("%d",&b);
    printf("Digite o valor de C\n");
    scanf("%d",&c);
    delta(a,b,c);
    return 0;
}