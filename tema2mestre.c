#include <stdio.h> 
int main () {

int opcao;
float nota1,nota2,media;

printf("###MENU DE GERENCIAMENTO SEMESTRAL###\n");
printf("1. CAUCULAR MÉDIA.\n");
printf("2. SITUAÇÃO.\n");
printf("3. SAIR.\n");
printf("ESCOLHA UMA OPÇÃO.\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1:
    printf("CAUCULAR MÉDIA:\n");
printf("DIGITE SUA NOTA:\n");
scanf("%f",&nota1);
printf("DIGITE SUA SEGUNDA NOTA:\n");
scanf("%f", &nota2);

if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
{
    media = (nota1 + nota2) /2 ;
    printf("A MÉDIA É: %.2f \n", media);
} else {
    printf("VALOR INCORRETO!");
}


    break;
case 2: printf("VER SITUAÇÃO.\n");
printf("DIGITE SUA MÉDIA:\n");
scanf("%f", &media);
media  >= 5 < 10 ? printf ("PARABÉNS,VOCÊ PASSOU!\n") : printf("INFELIZMENTE NÃO FOI DESSA VEZ!\n");
break;
case 3 : printf("ENCERRADO");
break;
default:printf("OPÇÃO INVALIDOA.");

    break;
}

}