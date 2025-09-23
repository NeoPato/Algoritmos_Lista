# 📌 Exercícios de Algoritmos (em C++)

Breve descrição de como foram resolvidos os problemas trazidos nas listas passadas durante as aulas de Algoritmos e Programação de Computadores. Os exercícios abordam estruturas sequenciais, condicionais e de repetição, ajudando a consolidar conceitos fundamentais de programação.

---

## 🚀 Funcionalidades

- ✅ **Primeira Lista**: Estrutura Sequencial  
- ✅ **Segunda Lista**: Estrutura Condicional  
- ✅ **Terceira Lista**: Estrutura de Repetição  

---

## 🖥️ Explicação das listas

### Primeira Lista
Exercícios focados em **estruturas sequenciais**: entrada, processamento e saída de dados.

**Problema 1**: Cálculo de Área e Preço de um Terreno
Necessita da entrada de 3 valores reais (float): largura, comprimento e valor do metro quadrado.
Retorna a área do terreno e o preço total.

✔ Área = largura × comprimento

✔ Preço total = área × valor do metro quadrado

**Problema 2**: Cálculo de um Retângulo (Área, Perímetro e Diagonal)
Necessita da entrada de 2 valores reais (float): base e altura.
Retorna a área, o perímetro e a diagonal do retângulo.

✔ Área = base × altura

✔ Perímetro = 2 × (base + altura)

✔ Diagonal = √(base² + altura²)

**Problema 3**: Média de Idades de 2 Alunos
Necessita da entrada de 2 valores inteiros (idades dos alunos) e 2 cadeias de caracteres (nomes dos alunos).
Retorna a média das idades e os nomes informados.

✔ Média = (idade1 + idade2) / 2

**Problema 4**: Soma de 2 Números Inteiros
Necessita da entrada de 2 valores inteiros.
Retorna a soma dos dois números.

✔ Soma = número1 + número2

**Problema 5**: Cálculo de Troco
Necessita da entrada de 3 valores reais (float): preço unitário do produto, quantidade comprada e valor pago.
Retorna o valor total da compra e o troco.

✔ Valor total = preço unitário × quantidade

✔ Troco = valor pago – valor total

Se o valor pago for menor que o valor total, o programa informa:
✔ Valor pago insuficiente. Faltam R$ X,XX.

**Problema 6**: Cálculo da Área de um Círculo
Necessita da entrada de 1 valor real (float): raio do círculo.
Retorna a área do círculo.

✔ Área = π × raio² (π ≈ 3.14159)

**Problema 7**: Cálculo de Salário
Necessita da entrada de 1 valor real (double): salário por hora, e 1 valor inteiro: horas trabalhadas.
Retorna o salário total do funcionário.

✔ Salário total = salário por hora × horas trabalhadas

**Problema 8**: Consumo Médio de Km/L
Necessita da entrada de 2 valores reais (float): quilômetros percorridos e litros consumidos.
Retorna o consumo médio do veículo.

✔ Consumo médio = km percorridos ÷ litros consumidos

**Problema 9**: Cálculo de Áreas (Quadrado, Triângulo e Trapézio)
Necessita da entrada de 3 valores reais (float): A, B e C.
Retorna a área do quadrado, do triângulo e do trapézio.

✔ Quadrado = A²

✔ Triângulo = (A × B) ÷ 2

✔ Trapézio = ((A + B) × C) ÷ 2

**Problema 10**: Conversão de Duração em Segundos
Necessita da entrada de 1 valor inteiro: duração total em segundos.
Retorna o valor formatado em horas, minutos e segundos.

✔ Horas = totalSegundos ÷ 3600

✔ Minutos = (totalSegundos % 3600) ÷ 60

✔ Segundos = totalSegundos % 60

### Segunda Lista
Exercícios com **estruturas condicionais**: if, else, switch, etc.

**Problema1**: 

### Terceira Lista
Exercícios com **estruturas de repetição**: for, while, do-while.

**Problema1**: Ordem (crescente ou decrescente) dos números de X a Y.
Nessessita da entrada de 2 valores inteiros (X e Y).
Retorna a ordem dos números entre X e Y.

✔ Se X < Y, mostra em ordem crescente.

✔ Se X > Y, mostra em ordem descrescente.

✔ Se não X = Y, informa que são iguais, assim encerrando o programa.

**Problema2**: Cálculo de média de idades até idade negativa ser informada.
Nessessita da entrada de várias idades (valores inteiros).
retorna a média das idades informadas, exceto a negativa que encerrra o programa.

✔ Se a idade for igual a zero, informa que não é possível o cálculo da média.

✔ Se não a idade for negativa, encerra o programa.

    ✔ Média = soma das idades ÷ quantidade de idades;

**problema3**: Continua se o valor informado não for 2002.
nessessita da entrada de um/vários valores inteiros.
Retorna uma mensagem de "Acesso Permitido" quando o valor 2002 for informado, encerrando o programa.

✔ Enquanto o valor for diferente de 2002, informa "Senha Invalida".

✔ Se o valor for igual de 2002, informa "Acesso permitido!" e encerra o código.

**problema4**: Quadrante de coordenadas.
Nessessita da entrada de 2 valores reais (float): coordenadas X e Y.
Retorna o quadrante em que as coordenadas estão localizadas.

✔ Enquanto X ≠ 0 e Y ≠ 0, informa o quadrante.

✔ Se X > 0 e Y > 0, informa "Primeiro".

✔ Se X < 0 e Y > 0, informa "Segundo".

✔ Se X < 0 e Y < 0, informa "Terceiro".

✔ Se X > 0 e Y < 0, informa "Quarto".

**problema5**: Soma de notas válidas.
Nessessita da entrada de duas notas (valores reai/float).
retorna a média das notas válidas (entre 0 e 10) e dividida pela quantidade de notas.

✔ Enquanto a nota for inválida (menor que 0 ou maior que 10), informa "Valor invalido! Tente novamente" e solicita uma nova nota.

✔ Se a nota for válida, soma a nota e incrementa a quantidade de notas válidas.

✔ Após 2 notas válidas, informa a média.

✔ Média = soma das notas ÷ quantidade de notas válidas.

**problema6**: Combustível (Alcool, Gasolina ou Diesel) contagem.
Nessessita da entrada de vários valores inteiros (1, 2, 3 ou 4).
Retorna a quantidade de cada combustível informado.

✔ Enquanto o valor for diferente de 4, continua solicitando um novo valor.

✔ Se o valor for 1, incrementa a contagem de Alcool.

✔ Se o valor for 2, incrementa a contagem de Gasolina.

✔ Se o valor for 3, incrementa a contagem de Diesel.

**problema7**: Soma de números pares.
Nessessita da entrada de 1 valor inteiro.
Retorna a soma de todos os números pares entre valor e 5 valores pares depois do valor informado (exclusivo).

✔ Enquanto a quantidade de números pares for menor que 5, continua somando os números pares.
✔ Soma dos pares = soma de todos os números pares entre valor e 5 valores pares depois do valor informado (exclusivo).
✔ Se o valor for impar, soma o valor impar com 1 para iniciar o cálculo dos pares.

**problema8**: Tabela de multiplicação.
Nessessita da entrada de um valor inteiro.
Retorna a tabuada do valor informado (de 1 a 10).

✔ Enquano o valor for menor que 10, continua multiplicando o valor.

✔ valor x 1 a 10 = resultado.

**problema9**: Soma de ímpares consecutivos.
Nessessita da entrada de 2 valores inteiros (X e Y).
Retorna a soma dos números ímpares entre X e Y.

✔ Enquanto X for maior que Y, solicita novos valores.

✔ Soma dos ímpares = soma dos números ímpares entre X e Y (exclusivo).

**problema10**: Sequência de impares.
Nessessita da entrada de 1 valor inteiro.
Retorna os valores de todos os números ímpares de 1 até X.

✔ Enquanto números ímpares de 1 até X.

**problema11**: Mostra se o valor está dentro ou fora do intervalo.
Nessessita da entrada de vários valores inteiros.
Retorna a quantidade das váriavel dentro ou fora do intervalo [10,20].

✔ Enquanto o valor for maior que x, continua solicitando novos valores.
✔ Se o valor estiver dentro do intervalo [10,20], adiciona 1 ponto para a váriavel dentro.
✔ Se o valor estiver fora do intervalo [10,20], adiciona 1 ponto para a variável fora.

**problema12**: Avisa se o valor é par ou ímpar e se é positivo e negativo.
Nessessita da entrada de vários valores inteiros.
Retorna a quantidade de valores pares, ímpares, positivos e negativos.

✔ Enquanto o valor for diferente da valor do contador informado, continua solicitando novos valores.

✔ Se o valor for par, escreva "Par".

    ✔ Se o valor for positivo, incrementa o texto "Positivo".

    ✔ Se o valor for negativo, incrementa o texto "Negativo".

✔ Se o valor for ímpar, escreva "Impar".

    ✔ Se o valor for positivo, incrementa o texto "Positivo".

    ✔ Se o valor for negativo, incrementa o texto "Negativo".

**problema13**: Média ponderada.
Nessessita da entrada de 3 valores reais (float) e entra de 1 valor inteiro.
Retorna a média ponderada das notas.

✔ Enquanto a valor i(0) for diferente do valor informado, continua solicitando 3 novos valores.

✔ Média ponderada = (nota1*2 + nota2*3 + nota3*5) ÷ (2+3+5)

**problema14**: Divisão de A por B.
Nessessita da entrada de 3 valores reais (float).
Retorna o resultado da divisão de A por B.

✔ Enquanto o valor de 0 for menor que valor do contador informado, continua solicitando 2 novos valores.

✔ Se o valor de B for igual a 0, informa "Divisão impossivel".

✔ Se o valor de B for diferente de 0, informa o resultado da divisão de A por B.

✔ Resultado = A ÷ B

**problema15**: Contagem de cobaias (coelhos, ratos e sapos).
Nessessita da entrada de vários valores inteiros (quantidade de cobaias) e caracteres (tipo de cobaia: C, R ou S).
Retorna a quantidade total de cobaias, a quantidade de cada tipo e o percentual de cada tipo em relação ao total.   

✔ Enquanto o valor for diferente do valor do contador informado, continua solicitando.

✔ Quantidade de cobaias (inteiro) e Tipo de cobaia (caractere: C, R ou S).

✔ Total de cobaias = soma da quantidade de cada tipo.

✔ Percentual de cada tipo = (quantidade de cada tipo ÷ total de cobaias) × 100.


---

## ⚙️ Tecnologias utilizadas

- C++  

---

## 📂 Estrutura do projeto

```bash
/
├── Exercicios_Condicional/       # Segunda Lista
├── Exercicios_Repetitivas/       # Terceira Lista
├── Exercicios_Sequencial/        # Primeira Lista
└── README.md                     # Documentação principal
