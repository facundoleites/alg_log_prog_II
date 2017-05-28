#include <stdio.h>
main(){
    //Comandos
    int idade;
    char nome[21];
    printf("hola mundo \n");
    printf("Qual é seu nome? ");
    scanf("%s",nome);
    printf("Qual é a sua idade? ");
    scanf("%d",&idade);
    printf("\n");
    printf("Bem vindo %s",nome);
    printf(",sua idade é %.d",idade);
    printf("\n");
    if(idade >= 18){
        printf("Você é maior de idade! \n");
    }else{
        printf("Você NÃO é maior de idade! já que tem menos de 18 anos \n");
    }
    return 0;
}