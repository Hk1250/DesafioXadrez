#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int jogador,computador,resultado;
    char comparacao;
srand(time (0));
computador = rand()% 100 + 1;

    //inicio do joogo

    printf("###BEM VINDO AO TESTANDO NUMBERS###\n");
    printf("ESCOLHA COMPARAÇÃO E DIGITE UM NUMBER\n");
    printf("A. MAIOR\n");
printf("B. MENOR \n");
printf("C. IGUAL\n");
printf("ESCOLHA QUAL COMPARAR:\n");
scanf("%c", &comparacao);
printf("DIGITE UM NUMERO DE 0 A 100:\n");
scanf("%d", &jogador);
//numeero do pc//
printf("O NUMERO DO COMPUTADOR É: %d \n", computador);

switch (comparacao)
{
case 'A':
if (jogador > computador)
{
    printf("JOGADOR VENCEU \n");
}else if (computador > jogador)
{
printf("COMPUTADOR VENCEU\n");
} else
{
    printf("NUMBERS IGUAIS");
}
    break;
case 'B': 
if (jogador < computador)
{
    printf("JOGADOR VENCEU");
}else if (computador < jogador)
{
    printf("COMPUTADOR VENCEU");
}else {
    printf("NUMBERS IGUAIS");
}
case 'C': 

if (jogador == computador)
{
    printf("Jogador venceu.");
}else
{
    printf("Computador venceu.");
}


break;
default: printf("OPÇÃO INVALIDA.");
    break;

   
    
}





}