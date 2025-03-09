#include <stdio.h>
int main () {

    float nota1,nota2,nota3;
    float media = 5.0;
    float divisao;

    printf("digite sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("digite sua segunda nota:\n");
    scanf("%f", &nota2);

    printf("digite sua terceira nota:\n");
    scanf("%f", &nota3);

    divisao = (nota1 + nota2 + nota3) / 3;

    printf("sua nota media é : %.1f\n - a nota média é : %.1f\n",divisao, media);

}