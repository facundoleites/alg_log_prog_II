#include <stdio.h>
#include <time.h>
int main(){
    time_t now = time(0);
    struct tm timeinfo = *localtime(&now);
    int anoatual = timeinfo.tm_year+1900;
    int idade;
    char nome[21];
printf("\n \n██████╗ ███████╗███╗   ███╗      ██╗   ██╗██╗███╗   ██╗██████╗  ██████╗\n██╔══██╗██╔════╝████╗ ████║      ██║   ██║██║████╗  ██║██╔══██╗██╔═══██╗\n██████╔╝█████╗  ██╔████╔██║█████╗██║   ██║██║██╔██╗ ██║██║  ██║██║██╗██║\n██╔══██╗██╔══╝  ██║╚██╔╝██║╚════╝╚██╗ ██╔╝██║██║╚██╗██║██║  ██║██║██║██║\n██████╔╝███████╗██║ ╚═╝ ██║       ╚████╔╝ ██║██║ ╚████║██████╔╝╚█║████╔╝\n╚═════╝ ╚══════╝╚═╝     ╚═╝        ╚═══╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚╝╚═══╝\n \n \n");
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
    int todososanos[idade];
    int i,anos_21,anos_20,anodaresta;
    anos_21 = 0;
    anodaresta = anoatual;
    while(anodaresta > 2000){
        anos_21++;
        anodaresta--;
    }
    anos_20 = idade - anos_21;
    printf("Você já viveu : \n");
    printf("\t %.d anos ─ e uma parte do %.d ─ no século XXI \n",(anos_21-1),anoatual);
    printf("\t %.d anos ─ e uma parte do %.d ─ no século XX \n",anos_20,(anoatual-idade));
    printf("\t O que quer dizer que: \n");
    if(anos_21 > anos_20){
        printf("\t \t Viveu a maior parte da sua vida no século XXI");
    }else if(anos_21 == anos_20){
        printf("\t \t Viveu ─ praticamente ─ a mesma quantidade de anos nos séculos XX e XXI");
    }else{
        printf("\t \t Viveu a maior parte da sua vida no século XX");
    }
    printf("\n");

    for(i=0;i <= idade;i++){
        anodaresta = anoatual - i;
        todososanos[((idade-1)-i)] = anodaresta;
        if(i == idade){
            printf("\n \t e uma parte do ano de %d no qual você nasceu \n",anodaresta);
        }else if(i == 0){
            printf("\t uma parte do ano de %d \n",anodaresta);
        }else{
            printf(" %d,",anodaresta);
        }
    }

    int idadeescolhida = 0;
    printf("=========================================== \n");
    printf("Informe uma idade e te direi que ano era: ");
    scanf("%d",&idadeescolhida);
    printf("\t Quando você fez %d anos o ano era %d \n",idadeescolhida,todososanos[(idadeescolhida-1)]);

    return 0;
}