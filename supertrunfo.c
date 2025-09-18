#include <stdio.h>

int main(void) {
    // Cartas pré-cadastradas
    char country_name1[30] = "Brasil";
    int population1 = 203080756, t_attractions1 = 93;
    float pib1 = 11.7, area1 = 8.511965, p_density1 = population1 / area1;

    char country_name2[30] = "França";
    int population2 = 103080756, t_attractions2 = 38;
    float pib2 = 8.7, area2 = 8.511998, p_density2 = population2 / area2;

    // Variáveis de escolha
    int choice;
    int atributo1 = 0, atributo2 = 0;

    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    float soma1 = 0, soma2 = 0;

    // ======== MENU 1 ========
    printf("****** SUPER TRUNFO ******\n");
    printf("ESCOLHA O PRIMEIRO ATRIBUTO:\n");
    printf(" 1. POPULACAO\n 2. PONTOS TURISTICOS\n 3. PIB\n 4. AREA\n 5. DENSIDADE POPULACIONAL\n");
    printf("ESCOLHA: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: atributo1 = 1; break;
        case 2: atributo1 = 2; break;
        case 3: atributo1 = 3; break;
        case 4: atributo1 = 4; break;
        case 5: atributo1 = 5; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // ======== MENU 2 (dinâmico) ========
    if(atributo1 == 1){
        printf("Agora escolha OUTRO atributo:\n");
        printf(" 2. PONTOS TURISTICOS\n 3. PIB\n 4. AREA\n 5. DENSIDADE POPULACIONAL\n");
        scanf("%d", &choice);
        switch(choice){
            case 2: atributo2 = 2; break;
            case 3: atributo2 = 3; break;
            case 4: atributo2 = 4; break;
            case 5: atributo2 = 5; break;
            default: printf("Opcao invalida!\n"); return 0;
        }
    }
    else if(atributo1 == 2){
        printf("Agora escolha OUTRO atributo:\n");
        printf(" 1. POPULACAO\n 3. PIB\n 4. AREA\n 5. DENSIDADE POPULACIONAL\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: atributo2 = 1; break;
            case 3: atributo2 = 3; break;
            case 4: atributo2 = 4; break;
            case 5: atributo2 = 5; break;
            default: printf("Opcao invalida!\n"); return 0;
        }
    }
    else if(atributo1 == 3){
        printf("Agora escolha OUTRO atributo:\n");
        printf(" 1. POPULACAO\n 2. PONTOS TURISTICOS\n 4. AREA\n 5. DENSIDADE POPULACIONAL\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: atributo2 = 1; break;
            case 2: atributo2 = 2; break;
            case 4: atributo2 = 4; break;
            case 5: atributo2 = 5; break;
            default: printf("Opcao invalida!\n"); return 0;
        }
    }
    else if(atributo1 == 4){
        printf("Agora escolha OUTRO atributo:\n");
        printf(" 1. POPULACAO\n 2. PONTOS TURISTICOS\n 3. PIB\n 5. DENSIDADE POPULACIONAL\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: atributo2 = 1; break;
            case 2: atributo2 = 2; break;
            case 3: atributo2 = 3; break;
            case 5: atributo2 = 5; break;
            default: printf("Opcao invalida!\n"); return 0;
        }
    }
    else if(atributo1 == 5){
        printf("Agora escolha OUTRO atributo:\n");
        printf(" 1. POPULACAO\n 2. PONTOS TURISTICOS\n 3. PIB\n 4. AREA\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: atributo2 = 1; break;
            case 2: atributo2 = 2; break;
            case 3: atributo2 = 3; break;
            case 4: atributo2 = 4; break;
            default: printf("Opcao invalida!\n"); return 0;
        }
    }

    // ======== CAPTURA DOS VALORES ========
    // Atributo 1
    if(atributo1 == 1){ valor1_attr1 = population1; valor2_attr1 = population2; }
    else if(atributo1 == 2){ valor1_attr1 = t_attractions1; valor2_attr1 = t_attractions2; }
    else if(atributo1 == 3){ valor1_attr1 = pib1; valor2_attr1 = pib2; }
    else if(atributo1 == 4){ valor1_attr1 = area1; valor2_attr1 = area2; }
    else if(atributo1 == 5){ valor1_attr1 = p_density1; valor2_attr1 = p_density2; }

    // Atributo 2
    if(atributo2 == 1){ valor1_attr2 = population1; valor2_attr2 = population2; }
    else if(atributo2 == 2){ valor1_attr2 = t_attractions1; valor2_attr2 = t_attractions2; }
    else if(atributo2 == 3){ valor1_attr2 = pib1; valor2_attr2 = pib2; }
    else if(atributo2 == 4){ valor1_attr2 = area1; valor2_attr2 = area2; }
    else if(atributo2 == 5){ valor1_attr2 = p_density1; valor2_attr2 = p_density2; }

    // ======== RESULTADO INDIVIDUAL ========
    printf("\n==== RESULTADO DAS COMPARACOES ====\n");
    printf("%s x %s\n", country_name1, country_name2);

    // Primeiro atributo
    if(atributo1 == 5){ // densidade: vence o menor
        printf("Atributo 1: Densidade (%.2f vs %.2f)\n", valor1_attr1, valor2_attr1);
        printf("Vencedor: %s\n", (valor1_attr1 < valor2_attr1) ? country_name1 : country_name2);
    } else {
        printf("Atributo 1: %.2f vs %.2f\n", valor1_attr1, valor2_attr1);
        printf("Vencedor: %s\n", (valor1_attr1 > valor2_attr1) ? country_name1 : country_name2);
    }

    // Segundo atributo
    if(atributo2 == 5){ // densidade: vence o menor
        printf("Atributo 2: Densidade (%.2f vs %.2f)\n", valor1_attr2, valor2_attr2);
        printf("Vencedor: %s\n", (valor1_attr2 < valor2_attr2) ? country_name1 : country_name2);
    } else {
        printf("Atributo 2: %.2f vs %.2f\n", valor1_attr2, valor2_attr2);
        printf("Vencedor: %s\n", (valor1_attr2 > valor2_attr2) ? country_name1 : country_name2);
    }

    // ======== SOMA FINAL ========
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", country_name1, soma1);
    printf("%s: %.2f\n", country_name2, soma2);

    if(soma1 > soma2){
        printf("VENCEDOR FINAL: %s\n", country_name1);
    } else if(soma2 > soma1){
        printf("VENCEDOR FINAL: %s\n", country_name2);
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}
