# Exercício 4: Implementação de Contagem

**Tarefa:**
Escreva uma função chamada `countNodes` que recebe a cabeça da lista e retorna quantos nós existem atualmente.

**Protótipo sugerido:**
```c
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}