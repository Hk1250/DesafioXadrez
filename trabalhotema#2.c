#include <stdio.h>
int main() {

int idade;

printf("digite sua idade:");
scanf("%d", &idade);

if( idade < 12){
printf( "voce é uma criança");

} 
else if ( idade >= 12 && idade < 18){
    printf("voce é adolescente");

}
else if(idade >= 18 && idade < 60){
    printf("voce é adulto");

}
else {
    printf("voce é idoso");
}

}