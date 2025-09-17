#include <stdio.h>

int main (void){
    // variáveis
    char country_name1[30] = "Brasil";
    int population1 = 203080756, t_attractions1 = 93;
    float pib1 = 11.7, area1 = 8.511965, p_density1 = population1 / area1;

    char country_name2[30] = "França";
    int population2 = 103080756, t_attractions2 = 38;
    float pib2 = 8.7, area2 = 8.511998, p_density2 = population2 / area2;

    int choice;

    // interação
    printf("*********** SUPER TRUNFO ***********\n ESCOLHA O ATRIBUTO DE COMPARAÇÃO:\n 1. POPULAÇÃO\n 2. PONTOS TURÍSTICOS\n 3. PIB\n 4. ÁREA\n 5. DENSIDADE POPULACIONAL\n ************************************\n");
    printf("DIGITE SUA OPÇÃO: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if(population1 > population2){
            printf("O(a) %s é maior em população tendo %d, enquanto o(a) %s tem %d!\n", country_name1, population1, country_name2, population2);
        } else if(population2 > population1) {
            printf("O(a) %s é maior em população tendo %d, enquanto o(a) %s tem %d!\n", country_name2, population2, country_name1, population1);
        } else {
            printf("O(a) %s é o(a) %s tem o mesmo número populacional, portando, empate!\n", country_name2, country_name1);
        }
        break;
    
    case 2:
        if(t_attractions1 > t_attractions2){
            printf("O(a) %s é maior em pontos turísticos tendo %d, enquanto o(a) %s tem %d!\n", country_name1, t_attractions1, country_name2, t_attractions2);
        } else if(t_attractions2 > t_attractions1) {
            printf("O(a) %s é maior em pontos turísticos %d, enquanto o(a) %s tem %d!\n", country_name2, t_attractions2, country_name1, t_attractions1);
        } else {
            printf("O(a) %s é o(a) %s tem o mesmo número de pontos turísticos, portando, empate!\n", country_name2, country_name1);
        }
        break;
    case 3:
        if(pib1 > pib2){
            printf("O PIB de %s sendo %.2f é maior que o de %s tendo %.2f!\n", country_name1, pib1, country_name2, pib2);
        } else if(pib2 > pib1){
            printf("O PIB de %s sendo %.2f é maior que o de %s tendo %.2f!\n", country_name2, pib2, country_name1, pib1);
        } else {
            printf("O(a) %s é o(a) %s tem o mesmo PIB, portando, empate!\n", country_name2, country_name1);
        }
        break;

    case 4:
        if(area1 > area2){
            printf("A área de %s sendo %.3f é maior que o de %s tendo %.3f!\n", country_name1, area1, country_name2, area2);
        } else if(area2 > area1){
            printf("A área de %s sendo %.3f é maior que o de %s tendo %.3f!\n", country_name2, area2, country_name1, area1);
        } else {
            printf("O(a) %s é o(a) %s tem a mesma área, portando, empate!\n", country_name2, country_name1);
        }
        break;
    
    case 5:
        if(p_density1 < p_density2){
            printf("A densidade populacional do(a) %s é menor que a do(a) %s, portando %s venceu!", country_name1, country_name2, country_name1);
        } else if(p_density2 < p_density1){
            printf("A densidade populacional do(a) %s é menor que a do(a) %s, portando %s venceu!", country_name2, country_name1, country_name2);
        } else {
            printf("O(a) %s é o(a) %s tem a mesma densidade populacional, portando, empate!\n", country_name2, country_name1);
        }
        break;
    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }

}