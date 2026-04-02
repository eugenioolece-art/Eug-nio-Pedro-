#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do Nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Criar novo nó
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro crítico de memória!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Inserção Ordenada (Desafio)
void insertOrdered(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Remover elemento
void removeElement(Node** head, int value) {
    Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Elemento %d removido com sucesso.\n", value);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Elemento %d não encontrado na lista.\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Elemento %d removido com sucesso.\n", value);
}

// Procurar elemento
void search(Node* head, int value) {
    Node* current = head;
    int pos = 0;
    while (current != NULL) {
        if (current->data == value) {
            printf("O valor %d foi encontrado na posição %d.\n", value, pos);
            return;
        }
        current = current->next;
        pos++;
    }
    printf("O valor %d não existe na lista.\n", value);
}

// Mostrar lista
void displayList(Node* head) {
    Node* temp = head;
    printf("\nESTADO ATUAL DA LISTA:\n");
    if (temp == NULL) printf("(Vazia)");
    while (temp != NULL) {
        printf("[%d] -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    Node* myList = NULL;
    int choice, value;

    do {
        printf("=== MENU LISTA LIGADA ===\n");
        printf("1. Inserir (Ordenado)\n");
        printf("2. Remover\n");
        printf("3. Procurar\n");
        printf("4. Mostrar Lista\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Valor a inserir: ");
                scanf("%d", &value);
                insertOrdered(&myList, value);
                break;
            case 2:
                printf("Valor a remover: ");
                scanf("%d", &value);
                removeElement(&myList, value);
                break;
            case 3:
                printf("Valor a procurar: ");
                scanf("%d", &value);
                search(myList, value);
                break;
            case 4:
                displayList(myList);
                break;
            case 0:
                printf("A encerrar...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
        printf("\n");
    } while (choice != 0);

    // Pausa final para o .exe não fechar no Windows
    printf("Programa terminado. Pressione qualquer tecla para fechar a janela.");
    system("pause > nul"); 
    return 0;
}
