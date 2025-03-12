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
case 'a':
resultado = jogador > computador ? 1 : 0;

    break;
case 'B':
case 'b':  
resultado = jogador < computador ? 1 : 0;
break;
case 'C': 
case 'c':
resultado = jogador == computador ? 1 : 0;
break;
default: printf("Opção invalida\n");
    break;
}
printf("O NUMERO DO JOGADOR É:%d \n ", jogador);

    if (resultado == 1)
    {
        printf("Parabens voce venceu");

    }else if(resultado == 0)
    {
        printf("Computador ganhou\n");
    }else
    {
        printf("OPÇÃO INVALIDA\n");
    }
    
    
}