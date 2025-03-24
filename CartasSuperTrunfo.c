#include <stdio.h>

int main(){
    char Estado[50],Cidade[50], Codigo[50];
    int Populacao, pontosturisticos;
    float Area, PIB;
    int carta;
    char Estado2[50],Cidade2[50], Codigo2[50];
    int Populacao2, pontosturisticos2;
    float Area2, PIB2;
    int carta2;


    printf("Digite o número da carta: \n");
    scanf("%d", &carta);

    printf("Digite o Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o Código: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a populacão: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    
    printf("carta: %d - Estado: %s - Código: %s\n",carta, Estado,  Codigo);
    printf("cidade: %s - População: %d\n", Cidade, Populacao);
    printf("Area: %f - Pib: %f\n", Area, PIB);
    printf("pontosturisticos: %d\n", pontosturisticos);

    printf("Digite o número da carta2: \n");
    scanf("%d", &carta2);

    printf("Digite o Estado2: \n");
    scanf("%s", &Estado2);

    printf("Digite o Código2: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade2: \n");
    scanf("%s", &Cidade2);

    printf("Digite a populacão2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos2: \n");
    scanf("%d", &pontosturisticos2);

    
    printf("carta2: %d - Estado2: %s - Código2: %s\n",carta2, Estado2,  Codigo2);
    printf("cidade: %s - População2: %d\n", Cidade2, Populacao2);
    printf("Area2: %f - Pib2: %f\n", Area2, PIB2);
    printf("pontosturisticos2: %d\n", pontosturisticos2);

}
