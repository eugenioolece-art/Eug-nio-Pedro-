### exercicio5.md
```markdown
# Exercício 5: Gerenciamento de Memória (Free)

O programa atual não limpa a memória ao sair.

**Tarefa:**
Implemente a função `freeList` para evitar vazamentos de memória (*memory leaks*).

**Exemplo de Implementação:**
```c
void freeList(Node** head) {
    Node* current = *head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    *head = NULL;
}