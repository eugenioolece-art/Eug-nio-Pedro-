
# Lista Ligada Simples em C (Ordenada)

Este repositório contém uma implementação robusta de uma **Lista Simplesmente Ligada** em linguagem C, com foco em **inserção ordenada** e manipulação dinâmica de memória.

## Funcionalidades

O programa oferece um menu interativo para as seguintes operações:

1.  **Inserção Ordenada**: Insere novos elementos mantendo a lista sempre em ordem crescente ($O(n)$).
2.  **Remoção de Elementos**: Localiza e remove um valor específico, liberando a memória alocada.
3.  **Busca**: Localiza um valor e retorna a sua posição (índice) na lista.
4.  **Exibição**: Mostra o estado atual da lista no console.
5.  **Gestão de Memória**: Utiliza `malloc` e `free` para gerenciamento dinâmico.

##  Como Funciona a Lógica

A estrutura principal baseia-se em nós que apontam para o próximo elemento:

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;
