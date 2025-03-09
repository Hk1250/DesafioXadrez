#include <stdio.h>
int main () {

int opcao;
float saldo = 100.000;
printf("1: verificar saldo\n");
printf("2: fazer depósito\n");
printf("3: fazer saque\n");
scanf("%d", &opcao);

switch (opcao)
{ 
case 1:
  printf("seu saldo é R$: %f \n", saldo);
    break;
case 2: 
printf("digite o valor que deseja depositar:\n");
printf("digite a ag e conta sem o ultimo digito do banco responsavel pelo intermédio do depósito. \n");
break;
case 3:
printf("digite o valor que deseja sacar,ag e conta do banco destinatario \n");
break;
default:
printf("opção invalida");
    break;
}

}