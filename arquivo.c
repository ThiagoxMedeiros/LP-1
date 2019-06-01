#include <stdio.h>
#include <string.h>


int main(void){

    char nome[25];
    printf("Digite seu nome: ");
    scanf("%s",nome);
    FILE* f=fopen("/tmp/arq-01.txt","w");
    for(int i=0;i<strlen(nome);i++)
    {
        fputc(nome[i],f);       
    }
    fclose(f);
      
  return 0;
