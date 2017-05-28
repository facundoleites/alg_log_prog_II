#include <stdio.h>
main(){
    //Comandos
    int idade;
    char nome[21];
    int anoatual = 2017;
    printf("Seja bemvindo !\n");
    printf("Qual é seu nome? ");
    scanf("%s",nome);
    printf("Qual é a sua idade? ");
    scanf("%d",&idade);
    printf("\n");
    printf("Bem vindo %s, sua idade é %.d \n",nome,idade);
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
    int i,anos_21,anos_20,anodaresta;
    i = 0;
    anos_21 = 0;
    anodaresta = anoatual;
    while(anodaresta > 2000){
        anos_21++;
        anodaresta--;
    }
    printf("Você já viveu : \n");
    printf("\t %.d anos ─ e uma parte do %.d ─ no século XXI \n",(anos_21-1),anoatual);
    printf("\t %.d anos ─ e uma parte do %.d ─ no século XX \n",(idade-anos_21),(anoatual-idade));
    for(i=0;i <= idade;i++){
        anodaresta = anoatual - i;
        if(i == idade){
            printf("\n \t e uma parte do ano de %d no qual você nasceu \n",anodaresta);
        }else if(i == 0){
            printf("\t uma parte do ano de %d \n",anodaresta);
        }else{
            printf(" %d,",anodaresta);
        }
    }
    return 0;
}