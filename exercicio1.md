# Exercício 1: Ponteiros Duplos

No código do programa, a função de inserção é definida como:
`void insertOrdered(Node** head, int value)`

**Pergunta:**
Por que é necessário passar o endereço do ponteiro (`Node**`) em vez de apenas o ponteiro simples (`Node*`)?

**Resposta Esperada:**
Para que a função possa modificar o ponteiro original que reside na `main`. Se inserirmos um elemento que deve ser o novo primeiro nó, precisamos alterar o endereço para onde a `head` aponta. Se passássemos apenas `Node*`, passaríamos uma cópia do endereço e a alteração não persistiria fora da função.