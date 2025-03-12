#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

int computador, jogador;
srand (time(0));

printf("Opções:\n");
printf("1. papel\n");
printf("2. tesoura\n");
printf("3. pedra\n");
printf("Escolha uma opção:\n");
scanf ("%d", &jogador);

computador = rand() % 3 + 1;

switch (jogador)
{
case 1 :
    printf("Jogador - papel\n");
    break;
    case 2 :
    printf("Jogador - tesoura\n");
    break;
    case 3 :
    printf("Jogador - pedra\n");
    break;
default: 
printf("Opção Invalida\n");
    break;
}
    switch (computador)
{
case 1 :
    printf("computador - papel\n");
    break;
    case 2 :
    printf("computador - tesoura\n");
    break;
    case 3 :
    printf("computador - pedra\n");
    default :
    break;
}
if (computador == jogador && jogador == computador){
    printf("empate!");
}else if ((jogador == 1 ) && (computador == 3) ||
(jogador == 2) && (computador == 1) || 
(jogador == 3) && (computador == 2)){
    printf("Você venceu!");
}else {
    printf("SEU MERDA,SEU BOSTA,VOCÊ PERDEU PARA UM COMPUTADOR!");
}

return 0;

}