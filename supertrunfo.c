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
    printf("*********** SUPER TRUNFO ***********\n ESCOLHA O ATRIBUTO DE COMPARAÇÃO:\n 1. POPULAÇÃO\n 2. PONTOS TURÍSTICOS\n 3. PIB\n 4. ÁREA\n 5. DENSIDADE POPULACIONAL\n **********************\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if(population1 > population2){
            printf("O %s é maior em população tendo %d, enquanto o %s tem %d!\n", country_name1, population1, country_name2, population2);
        } else if(population2 > population1) {
            printf("O %s é maior em população tendo %d, enquanto o %s tem %d!\n", country_name2, population2, country_name1, population1);
        } else {
            printf("O %s é o %s tem o mesmo número populacional, portando, empate!\n", country_name2, country_name1);
        }
        break;
    
    default:
        break;
    }

}