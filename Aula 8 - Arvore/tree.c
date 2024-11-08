#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da árvore binária
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Função para criar um novo nó
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Função para inserir um nó na árvore binária
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Função para buscar um valor na árvore
struct Node* search(struct Node* root, int data) {
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

// Função para exibir a árvore em pré-ordem
void preOrder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Função para exibir a árvore em-ordem
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Função para exibir a árvore em pós-ordem
void postOrder(struct Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

// Função para liberar memória de uma árvore binária
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct Node* root = NULL;

    // Inserindo nós na árvore
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Exibindo a árvore em diferentes ordens
    printf("Pré-ordem: ");
    preOrder(root);
    printf("\nEm-ordem: ");
    inOrder(root);
    printf("\nPós-ordem: ");
    postOrder(root);
    // Buscando um valor na árvore
    
    int value = 40;
    struct Node* foundNode = search(root, value);
    if (foundNode != NULL) {
         printf("\nValor %d encontrado na árvore.\n", value); 
    } else { 
        printf("\nValor %d não encontrado na árvore.\n", value); 
    } 
    // Liberando a memória alocada para a árvore
    freeTree(root);
    return 0;
}