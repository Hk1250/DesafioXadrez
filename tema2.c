#include <stdio.h>
int main () {
    //estrutura aninhada

    int idade;
    float renda;

    printf("digite sua idade: \n");
    scanf("%i", &idade);
    printf("Digite sua renda: \n");
    scanf("%f", &renda);

    if (idade < 18 || idade > 60){
        if(renda < 2000)
        {
           printf("voce atende ao criterios");
        }else {
           printf("voce nao atende ao critério renda");
        }
        
    }else{
        printf("voce não atende ao critério idadee");
    }
    }