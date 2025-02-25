#include <stdio.h>
int main (){

float populaçao = 2817000;
float pib = 244000000000;
float area = 5761;
char estado [50]= "B";
char codigo [50] = "B02";
char cidade [50] = "Brasiía";
int turismo = 17;
float densidade = populaçao / area;


printf("Estado %s\n Codigo: %s\n", estado, codigo);
printf("Nome da cidade %s\nNumero de habitantes %f\n", cidade, populaçao);
printf("Área da cidade %.2f KM\n Pib %f Bilhões\n", area, pib);
printf("Quantidade de pontos Turísticos %d\n", turismo);
