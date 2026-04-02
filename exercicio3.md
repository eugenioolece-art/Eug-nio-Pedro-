# Exercício 3: Lógica de Ponteiro Anterior

Na função `removeElement`, utilizamos uma variável auxiliar chamada `prev`.

**Tarefa:**
Explique o que acontece com a "corrente" da lista se removermos o nó `B` na sequência `A -> B -> C` sem atualizar o ponteiro `next` do nó `A`.

**Resposta Esperada:**
A lista ficaria "quebrada". O nó `A` continuaria apontando para o endereço de `B` (que já foi liberado com `free`), e o nó `C` ficaria órfão, tornando-se inacessível. Isso resulta em perda de dados e acesso a memória inválida.