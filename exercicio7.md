# Exercício 7: Inserção no Início vs. Ordenada

**Pergunta:**
No seu código, a função `insertOrdered` garante a ordem crescente. Se quiséssemos apenas inserir no início da lista (sem ordem), a operação seria mais rápida ou mais lenta? Por quê?

**Resposta Esperada:**
Seria muito mais rápida. Inserir no início é uma operação $O(1)$ (constante), pois não exige percorrer a lista. A inserção ordenada é $O(n)$, pois exige percorrer a lista para encontrar a posição correta.