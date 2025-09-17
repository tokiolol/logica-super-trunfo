# Super Trunfo de Países

Este é um jogo simples de **Super Trunfo**, implementado em **C**, onde o usuário compara atributos de dois países. O programa permite que você escolha entre cinco diferentes atributos para comparar e determinar qual país é superior, de acordo com o critério escolhido.

## Como Funciona

O jogo permite comparar dois países baseados em cinco atributos diferentes:

1. **População** – A quantidade de habitantes de cada país.
2. **Pontos Turísticos** – O número de pontos turísticos conhecidos de cada país.
3. **PIB** – O Produto Interno Bruto de cada país.
4. **Área** – A extensão territorial de cada país.
5. **Densidade Populacional** – A densidade de habitantes por quilômetro quadrado.

O usuário escolhe um dos atributos para comparar e o programa exibe qual país tem o melhor desempenho nesse critério.

## Funcionalidades

* O programa solicita que o usuário escolha um atributo entre os cinco disponíveis.
* Com base na escolha, o programa realiza a comparação entre dois países (Brasil e França, no caso do código fornecido).
* O programa exibe o vencedor de acordo com a comparação ou informa quando há um empate.
* O código é modular, permitindo a fácil adição de novos países e atributos para futuras expansões.

## Como Usar

1. Clone ou baixe este repositório.
2. Compile o código em C com seu compilador preferido (por exemplo, GCC):

   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```
3. Execute o programa:

   ```bash
   ./super_trunfo
   ```
4. Escolha o número correspondente ao atributo que deseja comparar (1 a 5).
5. O programa irá exibir o resultado da comparação entre os dois países.

### Exemplo de Execução

```bash
*********** SUPER TRUNFO ***********
 ESCOLHA O ATRIBUTO DE COMPARAÇÃO:
 1. POPULAÇÃO
 2. PONTOS TURÍSTICOS
 3. PIB
 4. ÁREA
 5. DENSIDADE POPULACIONAL
 ************************************
DIGITE SUA OPÇÃO: 1
O(a) Brasil é maior em população tendo 203080756, enquanto o(a) França tem 103080756!
```

## Estrutura do Código

### Variáveis

* **country\_name1 e country\_name2**: Armazenam os nomes dos países (Brasil e França).
* **population1 e population2**: Armazenam a população de cada país.
* **t\_attractions1 e t\_attractions2**: Armazenam a quantidade de pontos turísticos de cada país.
* **pib1 e pib2**: Armazenam o PIB de cada país.
* **area1 e area2**: Armazenam a área de cada país.
* **p\_density1 e p\_density2**: Calculam a densidade populacional de cada país.

### Lógica de Comparação

A escolha do usuário determina qual variável será comparada. O programa utiliza uma estrutura de controle `switch` para processar a escolha e comparar os países com base nos valores das variáveis.

* Se o valor do atributo no primeiro país for maior, o primeiro país vence.
* Se o valor do atributo no segundo país for maior, o segundo país vence.
* Se os valores forem iguais, ocorre um empate.

### Exemplo de Comparação: População

```c
if (population1 > population2) {
    printf("O(a) %s é maior em população tendo %d, enquanto o(a) %s tem %d!\n", country_name1, population1, country_name2, population2);
} else if (population2 > population1) {
    printf("O(a) %s é maior em população tendo %d, enquanto o(a) %s tem %d!\n", country_name2, population2, country_name1, population1);
} else {
    printf("O(a) %s é o(a) %s tem o mesmo número populacional, portando, empate!\n", country_name2, country_name1);
}
```

## Possíveis Melhorias

* **Adicionar mais países**: O código pode ser facilmente expandido para incluir mais países, bastando adicionar mais variáveis e logicamente integrar as comparações.
* **Ajuste para valores reais**: No código atual, a área e a população são armazenadas como inteiros e floats. Para países com valores muito grandes, pode ser interessante fazer o código mais robusto, usando tipos de dados mais apropriados (como `long long` para grandes populações ou `double` para valores de PIB e densidade).
* **Interface gráfica**: Para tornar o jogo mais interativo, seria interessante uma versão gráfica ou até uma versão baseada em web com mais interatividade.

## Licença

Este projeto é de código aberto e pode ser usado, modificado e distribuído sob os termos da licença MIT.

---

Se você tiver qualquer dúvida ou sugestão, fique à vontade para abrir uma issue ou enviar um pull request!
