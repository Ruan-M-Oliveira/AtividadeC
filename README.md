Atividade de Ponteiros, Structs e Alocação Dinâmica em C.
Aluno: Ruan Carlos

Questão 1 - Alteração de variável através de ponteiro

Inicialmente foi criada uma variável do tipo float representando o preço de um produto. Em seguida, foi declarado um ponteiro para armazenar o endereço dessa variável.

A alteração do preço foi realizada exclusivamente através do ponteiro, aplicando um aumento de 10%. Como o ponteiro acessa diretamente a posição de memória da variável, qualquer modificação feita por ele reflete imediatamente no valor original.

Conceitos utilizados
Ponteiros
Operador de indireção (*)
Endereçamento de memória (&)
Questão 2 - Encapsulando a lógica em uma função

A lógica de alteração do preço foi movida para uma função chamada aplicar_desconto.

A função recebe:

Um ponteiro para float, contendo o endereço do preço.
Um valor percentual de desconto.

Dessa forma, a função consegue modificar diretamente o valor armazenado na memória sem precisar retornar nenhum valor.

Conceitos utilizados
Passagem de parâmetros por referência
Ponteiros em funções
Funções do tipo void
Questão 3 - Utilizando Structs

O conceito de produto foi representado através da estrutura Produto, contendo:

id (inteiro)
preco (float)

A função aplicar_desconto foi adaptada para receber um ponteiro para uma estrutura Produto.

O acesso aos campos da estrutura foi realizado através do operador seta (->), utilizado quando trabalhamos com ponteiros para structs.

Conceitos utilizados
Structs
Ponteiros para estruturas
Operador seta (->)
Questão 4 - Vetor de Produtos

O programa foi expandido para trabalhar com múltiplos produtos através de um vetor de structs.

Foi criada a função imprimir_produtos, responsável por percorrer o vetor e exibir os dados cadastrados.

Como exigido pelo enunciado, o acesso aos elementos foi realizado utilizando aritmética de ponteiros:

(ptr + i)->preco

sem utilizar a notação tradicional de índices:

ptr[i]
Conceitos utilizados
Vetores de structs
Aritmética de ponteiros
Percurso de arrays
Questão 5 - Alocação Dinâmica de Memória

Na última etapa, o limite fixo de produtos foi removido.

O usuário informa quantos produtos deseja cadastrar e o programa utiliza a função malloc() para reservar dinamicamente a quantidade necessária de memória.

Após o preenchimento dos dados, a função imprimir_produtos é chamada para exibir o estoque.

Por fim, a memória utilizada é liberada através da função free(), evitando vazamentos de memória.

Conceitos utilizados
Alocação dinâmica
malloc()
free()
Manipulação de memória
Ponteiros para blocos alocados dinamicamente
