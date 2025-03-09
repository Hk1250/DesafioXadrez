#include <stdio.h>
int main () {
//estrutura aninhada//
    int idade;
    float renda;
    int dependentes; 

    printf("digite sua idade:\n ");
    scanf("%d", &idade);
    printf("digite sua renda:\n");
    scanf("%f", &renda);
    printf("digite numeros de dependentes:\n");
    scanf("%d", &dependentes);

    if(idade < 18 || idade >= 65){
      if(renda < 3000){
if( dependentes >= 3){
    printf("Voce atende aos criterio.\n");
}else{
    printf("voce nao atende ao criterio de dependentes.\n");
}
      }else{
        printf("voce não atende ao critério renda.\n");
      }
    }else{ 
        printf("voce não atende ao criterio idade.\n");
    }

}