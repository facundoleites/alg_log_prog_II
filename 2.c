#include <stdio.h>
int main(){
   //RA = 1643746-5
   int x,i,quintodigito,longitudevetor;
   int vetor[43]; //os dois digitos seguintes ─ do RA ─ serão usados como longitude do vetor
   x = 16;  //armazenar os dois primeiros digitos ─ do RA ─ na variavel x
   longitudevetor = 43; //os dois digitos seguintes ─ do RA ─ serão usados como longitude do vetor
   quintodigito = 7; // quantidade de valores do vetor preenchido seja exibida na tela determinada pelo quinto dígito do RA
   printf("MAPA ALGORITMOS E LOGICA DE PROGRAMAÇÃO II \n");
   printf("Facundo Leites \n");
   printf("==============\n");

   printf("Preenchendo vetor... \n");
   for(i=0; i<longitudevetor; i++){
      vetor[i] = x * i; //preencher o vetor com o resultado de uma operação entre o valor do índice do vetor e valor da variável X
   }

   printf("\n");
   for (i=0; i < quintodigito; i++){
      printf("\t A posição %d do vetor é %d\n", i, vetor[i]); //exibir na tela a quantidade de valores do 5 digito
   }
   printf("\n");
   return 0;
}