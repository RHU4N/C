#include <stdio.h>
#include <stdlib.h>  // Para o uso de malloc e free

// Definindo a estrutura de um nó da fila
struct Node {
   int data;            // Valor armazenado no nó
   struct Node *next;   // Ponteiro para o próximo nó
};
typedef struct Node Node;

struct Fila
{
    struct Node *begin;
    struct Node *end;
};

typedef struct Fila Fila;

Node *aux;

Fila* create(){
    Fila* vfl = (Fila*) malloc(sizeof(Fila));
    if(vfl!= NULL)
    {
        vfl->end = NULL;
        vfl->begin = NULL;
    }
    return vfl;
    
}

// Função para empilhar (push) um elemento na pilha
void push(Fila *vfl) { //defininfo uma função chamada push
   Node* new =(Node*) malloc(sizeof(Node));
   	printf("Digite o numero a ser inserido na fila: ");
	scanf("%d",&new->data);
    new->next = NULL;

    if (vfl->begin == NULL)
    {
        vfl->begin = new;
        vfl->end= new;
    }else{
        vfl->end->next = new;
        vfl->end = new;
    }
    printf("\nNumero inserido na fila!");
	getch();
    
}

void get_fila(Fila *vfl){
    if (vfl->begin == NULL)
    {
        printf("\nFila Vazia!!");
    }
    else{
        aux = vfl->begin;
        do
        {
            printf(" %d ", aux->data);
			aux = aux->next;
        } while (aux != NULL);
        
    }
    getch();
    
}

// Função para desempilhar (pop) um elemento da pilha
int pop(Fila *vfl) {
  if (vfl->begin == NULL)
  {
    printf("\nFila Vazia!!");
  }
  else{
    aux = vfl -> begin;
    printf("%d removido!", vfl->begin->next);
	vfl->begin = vfl->begin->next;
	free(aux);
  }
  getch();
  
}


// Função principal
int main() {
   Fila *vfl = create();
   for (int i=0;i==10;i++)
   {
    push(vfl);
   }
   get_fila(vfl);
       
}