# Simulador de enconstros Pokémon

Este projeto que simula encontros e a captura de Pokémons, com o objetivo de capturar um "shiny Pokémon" (versão rara, cuja probabilidade de captura é 1/4096), feito com fins de estudo na linguagem C.

**Funcionalidades:**

* Uso de funções para cálculo de condições. <br>
* Geração de número aleatório. <br>
* Laço do-while e if para verificação condicional. <br>
* Contagem de loops até alcançar a condicção.

**Tecnologias:**

* C: Usado para criar a lógica da simulação e a interação entre o usuário e o programa. <br>
* Funções da biblioteca stdlib.h e time.h: <br>

  srand(time(NULL)): Gera uma semente baseada no tempo atual para criar números aleatórios. <br>
  rand() % (max - min + 1) + min: Gera um número aleatório dentro do intervalo dado, simulando a chance de encontrar um shiny Pokémon. <br>

**Como Usar:**

Compile e rode o código em C usando um compilador como gcc.
