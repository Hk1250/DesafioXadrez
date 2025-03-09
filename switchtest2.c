#include <stdio.h>
int main () {

int dia;

printf("entre com o dia: \n");
scanf("%d", &dia);

switch (dia)
{
case 1:
    printf("hoje é domingo");
    break;
    case 2:
    printf("hoje é segunda");
    break;
    case 3:
    printf("hoje é terça-feira");
    break;
    case 4:
    printf("hoje é quarta-feira");
    break;
    case 5:    
    printf("hoje é quinta-feira");
    break;
    case 6:
    printf("hoje é sexta-feira");
    break;
    case 7:
    printf("hoje é sabádo");
    break;
default:
printf("opção invalida!");
    break;
}


}