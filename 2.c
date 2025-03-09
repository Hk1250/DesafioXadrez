#include <stdio.h>
int main() {
// estrutura aninhada com estrutura desencadeada

int numero;

printf("digite um numero:");
scanf("%d", &numero);

if (numero > 0){
    if( numero % 2 == 0 ){
    printf("este numero é par");}
    else{
    printf("este numero é impar");}
}else if(numero == 0 ){
 printf("este numero é zero.\n");   
}else{
    printf("este numero é negativo");
}

}