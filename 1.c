#include <stdio.h>
main(){
    //Comandos
    int idade;
    int n;
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
    return 0;
}