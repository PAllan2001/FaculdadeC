# 🚗 Verificação de Habilitação em C

Este é um programa simples desenvolvido em **C** que simula algumas regras básicas relacionadas à **Carteira Nacional de Habilitação (CNH)**.

O programa faz perguntas ao usuário no terminal e, com base nas respostas, informa:

* Se a pessoa pode **tirar a habilitação**
* Se **precisa renovar a CNH** por causa da idade
* Se ainda está na **carteira provisória**
* Ou se já possui **carteira definitiva**

---

## 📌 Objetivo do Projeto

Este projeto foi criado para praticar conceitos básicos da linguagem C, como:

* Entrada de dados com `scanf`
* Saída de dados com `printf`
* Estruturas condicionais (`if`, `else if`, `else`)
* Operadores lógicos (`&&`, `||`, `!`)
* Estrutura de decisão baseada em múltiplas condições

---

## ⚙️ Como o Programa Funciona

O programa segue a seguinte sequência lógica:

### 1️⃣ Verificação de idade

O sistema primeiro verifica a idade do usuário para determinar regras de renovação da habilitação:

* **30 a 49 anos** → nenhuma mensagem específica
* **50 a 69 anos** → renovação da CNH a cada **5 anos**
* **70 anos ou mais** → renovação da CNH a cada **3 anos**

---

### 2️⃣ Verificação de emancipação

Caso o usuário tenha menos de 30 anos, o programa pergunta se ele é **emancipado**.

A pessoa pode tirar habilitação se:

* tiver **18 anos ou mais**, ou
* tiver **16 anos ou mais e for emancipada**

Caso contrário, o programa informa que **não é permitido tirar a habilitação**.

---

### 3️⃣ Verificação de habilitação

O sistema pergunta se o usuário **já possui carteira de habilitação**.

Se **não possuir**, o programa informa que é necessário **tirar a habilitação primeiro**.

---

### 4️⃣ Tempo de habilitação

Caso a pessoa já possua habilitação, o programa pergunta há quanto tempo ela possui a carteira:

* **Menos de 1 ano** → carteira **provisória**
* **Mais de 1 ano** → carteira **definitiva**

---

## 🛠️ Tecnologias Utilizadas

* Linguagem **C**
* Biblioteca padrão `stdio.h`

---

## 📚 Conceitos Praticados

* Lógica de programação
* Estruturas condicionais
* Operadores lógicos
* Interação com usuário no terminal


## 👨‍💻 o como exercício de prática em **programação em C**.
