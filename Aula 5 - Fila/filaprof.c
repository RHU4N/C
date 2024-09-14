#include <stdio.h>
#include <stdlib.h>
// Definição da estrutura para representar um nó da fila
struct Node {
   int data;           // Dado do nó
   struct Node* next;  // Ponteiro para o próximo nó
};
// Estrutura para representar a fila
struct Queue {
   struct Node *front, *rear;  // Ponteiros para o início (front) e o fim (rear) da fila
};
// Função para criar um novo nó
struct Node* createNode(int value) {
   struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); // Aloca memória para o novo nó
   temp->data = value;     // Atribui o valor ao nó
   temp->next = NULL;      // O próximo nó é NULL (último nó da fila)
   return temp;            // Retorna o novo nó
}
// Função para criar uma fila vazia
struct Queue* createQueue() {
   struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)); // Aloca memória para a fila
   q->front = q->rear = NULL;   // Inicializa os ponteiros front e rear como NULL
   return q;                    // Retorna a fila criada
}
// Função para inserir um elemento na fila
void enqueue(struct Queue* q, int value) {
   // Cria um novo nó com o valor fornecido
   struct Node* temp = createNode(value);
   // Se a fila estiver vazia, front e rear apontarão para o novo nó
   if (q->rear == NULL) {
       q->front = q->rear = temp;
       printf("Elemento %d inserido na fila.\n", value);
       return;
   }
   // Caso contrário, adiciona o novo nó ao fim da fila e atualiza o ponteiro rear
   q->rear->next = temp;
   q->rear = temp;
   printf("Elemento %d inserido na fila.\n", value);
}
// Função para remover um elemento da fila
int dequeue(struct Queue* q) {
   // Se a fila estiver vazia, não é possível remover nada
   if (q->front == NULL) {
       printf("Fila vazia, não há elementos para remover.\n");
       return -1; // Indica erro (fila vazia)
   }
   // Armazena o nó do início da fila
   struct Node* temp = q->front;
   // Move o ponteiro front para o próximo nó
   q->front = q->front->next;
   // Se front se tornar NULL, a fila está vazia, então rear também deve ser NULL
   if (q->front == NULL)
       q->rear = NULL;
   int removedValue = temp->data; // Armazena o valor removido
   free(temp);                    // Libera a memória do nó removido
   printf("Elemento %d removido da fila.\n", removedValue);
   return removedValue;           // Retorna o valor removido
}
// Função para exibir os elementos da fila
void displayQueue(struct Queue* q) {
   struct Node* temp = q->front;
   // Verifica se a fila está vazia
   if (temp == NULL) {
       printf("Fila está vazia.\n");
       return;
   }
   // Percorre a fila e imprime os elementos
   printf("Elementos na fila: ");
   while (temp != NULL) {
       printf("%d ", temp->data);
       temp = temp->next;
   }
   printf("\n");
}
// Função principal para testar as operações da fila
int main() {
   // Criação de uma nova fila
   struct Queue* q = createQueue();
   // Inserção de elementos na fila
   enqueue(q, 10);
   enqueue(q, 20);
   enqueue(q, 30);
   enqueue(q, 40);
   // Exibe os elementos da fila
   displayQueue(q);
   // Remove elementos da fila
   dequeue(q);
   dequeue(q);
   // Exibe os elementos da fila após remoção
   displayQueue(q);
   return 0;
}