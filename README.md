# Manipulação de Vetores em C

## Identificação do estudante
- **Nome:** Hélio Junior Vieira Caires
- **Disciplina:** _[Algoritmos e Pensamento Computacional]_
- **Professor(a):** _[Karla Roberto Sartin]_

## Objetivo da atividade
Desenvolver um programa em linguagem C que aplique os conceitos de arrays (vetores), estruturas de repetição, estruturas condicionais, entrada de dados e operações matemáticas. O programa lê 20 números inteiros digitados pelo usuário, armazena-os em um vetor e realiza as seguintes análises:

- Soma dos elementos múltiplos de 3;
- Média dos elementos pares;
- Quantidade de números positivos e negativos (o zero não é contado em nenhum dos dois casos);
- Maior e menor valor do vetor;
- Exibição de todos os elementos armazenados.

## Lógica utilizada
Todo o programa está dentro do `main`, dividido em quatro blocos, todos percorrendo o vetor com laços `while`:

1. **Leitura:** um `while (contador < QTD_ELEMENTOS)` incrementa `contador` manualmente e usa `scanf` para armazenar cada número digitado na posição `lista[contador]`.
2. **Processamento:** um segundo `while` percorre todo o vetor e, para cada posição, aplica estruturas condicionais para:
   - Somar o valor em `acumuladorMult3` quando ele é múltiplo de 3 (`lista[contador] % 3 == 0`);
   - Somar o valor em `acumuladorPares` e incrementar `totalPares` quando ele é par (`lista[contador] % 2 == 0`);
   - Incrementar `totalPositivos` se o valor for maior que zero, ou `totalNegativos` se for menor que zero — o zero não entra em nenhum dos dois contadores;
   - Atualizar `valorMaximo` e `valorMinimo`, que começam com o primeiro elemento do vetor.
3. **Tratamento de divisão por zero:** antes de calcular a média dos pares, o código verifica se `totalPares > 0`. Se não houver nenhum número par, é exibida uma mensagem informativa em vez de dividir por zero.
4. **Exibição final:** um terceiro `while` percorre o vetor novamente e imprime todos os números na mesma linha, separados por vírgula.

## Como compilar e executar

### Pré-requisitos
Ter um compilador C instalado (por exemplo, `gcc`).

### Compilação
```bash
gcc -Wall -o vetores_helio vetores_helio.c
```

### Execução
```bash
./vetores_helio
```

No Windows (usando o compilador do MinGW, por exemplo):
```bash
gcc -Wall -o vetores_helio.exe vetores_helio.c
vetores_helio.exe
```

O programa solicitará, um a um, a digitação dos 20 números inteiros.

## Exemplo de entrada e saída

**Entrada** (os 20 números digitados, um por vez):
```
1 2 3 4 5 6 7 8 9 10 -1 -2 -3 0 15 21 -30 8 -9 100
```

**Saída:**
```
---- Cadastro dos 20 numeros ----
Numero  1: 1
Numero  2: 2
...
Numero 20: 100

---- Resultados obtidos ----
Soma dos numeros multiplos de 3.....: 12
Media dos numeros pares.............: 10.60
Quantidade de numeros positivos.....: 14
Quantidade de numeros negativos.....: 5
Maior valor encontrado..............: 100
Menor valor encontrado..............: -30

---- Numeros digitados, na ordem ----
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, 0, 15, 21, -30, 8, -9, 100
```

## Captura de tela da execução
<img width="1490" height="1006" alt="image" src="https://github.com/user-attachments/assets/4182db51-6aac-4d33-bb8b-7ea5802e2c16" />


## Estrutura do repositório
```
.
├── vetores_helio.c   # Código-fonte em C (uso de while, sem funções)
├── README.md         # Este arquivo
└── execucao.png      # Captura de tela da execução
```
