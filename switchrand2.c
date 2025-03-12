#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

int opcao, ajuda;
int numerosecreto,palpites;

printf("Menu Principal. \n");
printf("1. Iniciar jogo\n");
printf("2. Ver regras do jogo\n");
printf("3. depositar\n");
printf("4. Saque\n");
printf("5. Sair do jogo \n ");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1 :
    srand (time(0));
    numerosecreto = rand() % 15;
    printf("digite um numero de 0 a 14:");
    scanf("%d", &palpites);
    if (numerosecreto == palpites)
    {
        printf("voce acertou o numero secreto! \n");
        printf("seu numero secre: %d \n", palpites);
        printf("numero secreto: %d \n", numerosecreto);
    }else{
printf("voce errou o numero secreto!\n");
printf("seu numero secreto: %d \n", palpites);
printf("numero secreto: %d \n", numerosecreto);

    }
    break;
    case 2 :
    printf("Ajuda:\n");
    printf("1. Como jogar?\n");
    printf("2. Como fazer saque?\n");
printf("3. Como cadastra conta bancaria?\n");
printf("escolha uma opção:\n");
scanf("%d", &ajuda);
switch (ajuda)
{
case 1:
    printf("A regra é clear,basta voce escolher um numero para acertar o numero secreto,se acertar,você ganhará \nrecompensas em bonus,skins,dinheiro e muito mais. \n");

    break;
    case 2 : 
    printf("Para fazer saque é simples,basta cadastrar ag e conta bancaria do banco destinatario \ne informar o valor do saque.");
break;
case 3 :
printf("Para cadastrar sua conta bancaria é simples,basta seguir este passo a passo:\n 1. No inicio do jogo,vá em configurações > efetuar saque. \n 2. aperte em: cadastrar conta bancária.\n 3. siga as instruções passo a passo.\n Aaaa,e lembrando bem,que a sua validação da sua conta bancária pode demorar de 1hr a 48 hr.\n valido apenas em dias úteis.\n ");
default:
    break;
}


    break;
    case  3 :
    /* code */
    break;    

default:
    break;
}

}