#include <stdio.h>
int main ()  {

//int idade;
//int resultado;

//printf("digite sua idade:\n");
//scanf("%d", &idade);

//idade >= 18 ? printf("Você é maior de idade.") : printf ("Você é menor de idade");
int num1, num2;
int maior;

printf("digite um numero:");
scanf("%d", &num1);
printf("digite um numero:");
scanf("%d", &num2);

num1 > num2 ? (maior = num1) : (maior = num2);
printf("O numero maior é: %d", maior);

}