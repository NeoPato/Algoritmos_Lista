# 📌 Exercícios de Algoritmos (em C++)

Breve descrição de como foram resolvidos os problemas trazidos nas listas passadas durante as aulas de Algoritmos e Programação de Computadores. Os exercícios abordam estruturas sequenciais, condicionais e de repetição, ajudando a consolidar conceitos fundamentais de programação.

---

## 🚀 Funcionalidades

- ✅ **Primeira Lista**: Estrutura Sequencial  
- ✅ **Segunda Lista**: Estrutura Condicional  
- ✅ **Terceira Lista**: Estrutura de Repetição  

---

## Como Executar o Código

Este projeto pode ser compilado e executado utilizando o **Visual Studio Code** (VS Code) e o **MinGW** (Minimalist GNU for Windows). Siga as instruções abaixo para configurar seu ambiente e rodar o código.

---

## 1. **Executar o Código com Visual Studio Code e MinGW**

### 1.1 **Instalar o Visual Studio Code**

1. Baixe e instale o **Visual Studio Code** [aqui](https://code.visualstudio.com/).
2. Após a instalação, abra o VS Code e instale a extensão **C/C++**:
   - No menu lateral esquerdo, clique em **Extensões** (ícone de quadrado com 4 pequenos quadrados) e pesquise por "C/C++".
   - Instale a extensão fornecida pela **Microsoft**.

### 1.2 **Instalar o MinGW**

1. Baixe e instale o **MinGW** (Minimalist GNU for Windows) [aqui](https://sourceforge.net/projects/mingw/).
2. Durante a instalação, escolha a versão do **MinGW (GCC)** para C e C++
3. Durante a execução do MinGW Installation Manager, selecione mingw32-base e mingw32-gcc-g++, clique em installion e Apply Changes
4. Após a instalação, adicione o diretório `bin` do MinGW ao **PATH** do sistema:
   - Abra o **Prompt de Comando** ou **PowerShell** e digite: `echo %PATH%`.
   - Caso o caminho do MinGW não esteja lá, adicione manualmente o diretório `bin` (onde o `gcc` e o `g++` estão localizados) às variáveis de ambiente.

   Exemplo de caminho no Windows (C:\MinGW\bin):

### 2.2 **Compilar o Código**

Com o **MinGW** instalado, siga os passos abaixo para compilar o código:

1. Abra o **Prompt de Comando** ou o **PowerShell**.
2. Navegue até o diretório onde os arquivos fonte do projeto estão localizados.
3. Use o comando `gcc` (para C) ou `g++` (para C++) para compilar o código. Aqui está um exemplo de como compilar um arquivo C chamado `main.c`:

**Para C**:
```bash
gcc main.c -o main.exe

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
