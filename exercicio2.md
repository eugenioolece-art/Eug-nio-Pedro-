# Exercício 2: O Marcador de Fim de Lista

Analise o seguinte trecho da função `displayList`:
`while (temp != NULL)`

**Pergunta:**
O que acontece se esquecermos de definir o `next` do último nó como `NULL` durante a criação ou inserção?

**Resposta Esperada:**
O programa entrará em um comportamento indefinido. O loop `while` continuará tentando acessar endereços de memória aleatórios (lixo de memória) até que o sistema operacional interrompa a execução do programa com um erro de *Segmentation Fault*.