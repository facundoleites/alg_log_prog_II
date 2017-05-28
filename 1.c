#include <stdio.h>
main(){
    //Comandos
    int idade;
    char nome[21];
    int anoatual = 2017;
    printf("hola mundo \n");
    printf("Qual é seu nome? ");
    scanf("%s",nome);
    printf("Qual é a sua idade? ");
    scanf("%d",&idade);
    printf("\n");
    printf("Bem vindo %s",nome);
    printf(",sua idade é %.d",idade);
    printf("\n");
    switch(idade){
        case 18:
            printf("você está no limite! \n");
            break;
        default:
            if(idade >= 18){
                printf("Você é maior de idade! \n");
            }else{
                printf("Você NÃO é maior de idade! já que tem menos de 18 anos \n");
            }
    }
    int i;
    printf("Você já viveu : \n");
    for(i=0;i <= idade;i++){
        int anodaresta = anoatual - i;
        if(i == idade){
            printf("\t uma parte do ano de %d no qual você nasceu \n",anodaresta);
        }else if(i == 0){
            printf("\t uma parte do ano de %d \n",anodaresta);
        }else{
            printf("\t o ano de %d \n",anodaresta);
        }
    }
    return 0;
}