# 🃏 Super Trunfo em C - Comparações Avançadas

Este projeto é a versão **nível mestre** do desafio de programação em C:  
um jogo simplificado de **Super Trunfo** que compara **cartas de países** com base em múltiplos atributos.

---

## 🚀 Funcionalidades

- **Escolha de dois atributos** para comparação (sem repetir o mesmo atributo).
- **Menus dinâmicos** usando `switch`.
- **Comparação com regras especiais**:
  - Para todos os atributos vence o maior valor.
  - **Exceção:** na **Densidade Populacional**, vence o menor valor.
- **Soma final dos atributos** escolhidos:
  - Quem tiver a maior soma vence a rodada.
  - Se as somas forem iguais → **Empate!**
- **Exibição clara dos resultados**:
  - Nome dos países
  - Valores de cada atributo escolhido
  - Vencedor de cada atributo
  - Soma final dos dois atributos
  - Vencedor da rodada ou empate

---

## 📋 Estrutura do Código

- **Cartas pré-cadastradas**: Brasil e França, com atributos:
  - População
  - Pontos turísticos
  - PIB
  - Área
  - Densidade populacional (calculada automaticamente)
- **Menu inicial** → escolha do primeiro atributo.
- **Menu dinâmico** → escolha do segundo atributo (sem repetir o primeiro).
- **Comparações** → verificam quem vence em cada atributo.
- **Resultado final** → baseado na soma dos dois atributos.

---

## 🖥️ Exemplo de Execução


****** SUPER TRUNFO ******
ESCOLHA O PRIMEIRO ATRIBUTO:
 1. POPULACAO
 2. PONTOS TURISTICOS
 3. PIB
 4. AREA
 5. DENSIDADE POPULACIONAL
ESCOLHA: 1

Agora escolha OUTRO atributo:
 2. PONTOS TURISTICOS
 3. PIB
 4. AREA
 5. DENSIDADE POPULACIONAL
ESCOLHA: 5

==== RESULTADO DAS COMPARACOES ====
Brasil x França
Atributo 1: 203080756.00 vs 103080756.00
Vencedor: Brasil
Atributo 2: Densidade (23844796.00 vs 12114435.00)
Vencedor: França

Soma dos atributos:
Brasil: 23844796.00
França: 12114435.00
VENCEDOR FINAL: Brasil


---

## 🛠️ Tecnologias

* Linguagem: **C**
* Compilador recomendado: `gcc`

Para compilar e rodar:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

---

## 📚 Aprendizados

* Estruturas de decisão em C (`if`, `else`, `switch`).
* Criação de menus interativos sem usar **funções**, **loops** ou **structs**.
* Tratamento de opções inválidas com `default`.
* Aplicação de regras especiais (atributo com vitória invertida).
* Organização e clareza na exibição dos resultados.

---

## ✨ Créditos

Desafio proposto como parte do aprendizado em **C - lógica e estruturas de decisão**.
Implementado por **Natan Machado**. 🚀
