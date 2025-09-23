# 📌 Exercícios de Algoritmos (em C++)

Breve descrição de como foram resolvidos os problemas trazidos nas listas passadas durante as aulas de Algoritmos e Programação de Computadores. Os exercícios abordam estruturas sequenciais, condicionais e de repetição, ajudando a consolidar conceitos fundamentais de programação.

---

## 🚀 Funcionalidades

- ✅ **Primeira Lista**: Estrutura Sequencial  
- ✅ **Segunda Lista**: Estrutura Condicional  
- ✅ **Terceira Lista**: Estrutura de Repetição  

---

## Como Executar o Código

Este projeto pode ser compilado e executado tanto no **Visual Studio** quanto no **MinGW**. Escolha o método de sua preferência e siga as instruções abaixo.

---

## 1. **Executar o Código no Visual Studio**

### 1.1 **Instalar o Visual Studio**

Caso você ainda não tenha o Visual Studio instalado, siga os passos abaixo:

1. Baixe e instale o **Visual Studio** [aqui](https://visualstudio.microsoft.com/).
2. Durante a instalação, certifique-se de incluir os componentes de desenvolvimento para **C++**:
   - Selecione a opção "Desenvolvimento Desktop com C++" (Desktop development with C++).
   - Isso instalará o compilador e as ferramentas necessárias para compilar e executar código C/C++.

### 1.2 **Abrir o Projeto no Visual Studio**

1. Abra o **Visual Studio**.
2. No menu superior, selecione **File** > **Open** > **Project/Solution**.
3. Navegue até a pasta onde está o código-fonte do projeto e abra o arquivo de solução do Visual Studio (`.sln`), caso exista.
4. Se o projeto não contiver um arquivo de solução `.sln`, você pode criar um novo projeto C/C++ no Visual Studio e adicionar os arquivos fonte manualmente.

### 1.3 **Configurar o Projeto**

Se o projeto já possui um arquivo `.sln`, esta etapa pode ser ignorada. Caso contrário, siga os passos:

1. Crie um novo projeto **Console Application** em C++:
   - Selecione **File** > **New** > **Project**.
   - Escolha **Console Application** e selecione **C++** como linguagem.
2. Adicione seus arquivos fonte ao novo projeto. Clique com o botão direito na pasta **Source Files** no **Solution Explorer** e selecione **Add** > **Existing Item...**. Selecione os arquivos `.cpp` ou `.c` do seu projeto.

### 1.4 **Compilar e Executar o Código**

1. No **Visual Studio**, clique em **Build** > **Build Solution** ou pressione `Ctrl + Shift + B` para compilar o projeto.
2. Após a compilação, clique em **Debug** > **Start Debugging** ou pressione `F5` para executar o código.

Se preferir, você pode executar o arquivo diretamente da pasta de saída (`Debug` ou `Release`).

---

## 2. **Executar o Código com MinGW**

### 2.1 **Instalar o MinGW**

Para compilar o código usando o **MinGW** (Minimalist GNU for Windows), siga os passos abaixo:

1. Baixe o instalador do MinGW [aqui](https://sourceforge.net/projects/mingw-w64/).
2. Durante a instalação, selecione a opção para instalar o **MinGW (GCC)**.
3. Após a instalação, adicione o diretório `bin` do MinGW ao **PATH** do seu sistema:
   - Abra o **Prompt de Comando** ou **PowerShell** e digite: `echo %PATH%`.
   - Caso o caminho do MinGW não esteja lá, adicione manualmente o diretório `bin` (onde o `gcc` está localizado) às variáveis de ambiente.
   (C:\MinGW\bin);

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
