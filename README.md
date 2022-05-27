# BFS
Resolução do exercício proposto: caminho em um mapa usando BFS.

# O que é BFS:
Em teoria dos grafos, Breadth First search ou Busca em Largura são algorítmos de busca utilizados para realizar uma travessia em um grafo ou estrutura do tipo árvore explorando todos os vértices vizinhos.

# Do que se trata o trabalho:
No programa o usuário fornece um mapa em forma de matriz NxM que informa as posições que podem ser percorridas com '.' e as impedidas com '-', sendo que a primeira e a última posição devem obrigatoriamente ser '.' e seus vizinhos não podem estar mutuamente impedidos. O objetivo é encontrar, a partir da posição 1x1, um caminho para a posição NxM.

# Como o BFS foi implementado:
Através do uso da estrutura Fila em cada posição os vizinhos são analisados, se estes podem ser percorridos são adicionados à fila. A cada interação o primeiro item da fila é excluído.

# O que é uma fila:
Uma fila é uma estrutura de dados dinâmica que admite remoção de elementos e inserção de novos objetos. Mais especificamente, uma fila é uma estrutura sujeita à seguinte regra de operação: sempre que houver uma remoção, o elemento removido é o que está na estrutura há mais tempo.
