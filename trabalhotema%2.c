#include <stdio.h>
int main () {


    
    int note;

    printf("digite sua nota:\n");
     scanf("%d", &note);


if(note > 99  ){
    printf("voce é um excelente aluno");
}else if(note >= 90 && note <= 99){
    printf("voce é um ótimo aluno");
}else if(note >= 80 && note < 90){
    printf("voce é um bom aluno");
}else if(note >= 70 && note < 80 ){
    printf("Voce é um esforçado aluno");
}else if(note >= 50 && note < 70){
    printf("parabéns voce está na média!");
}else {
    printf("infelizmente,voce nao passou!");
}

}