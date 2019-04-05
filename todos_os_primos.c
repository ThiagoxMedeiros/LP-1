#include <stdio.h>
 // funçao para achar os numeros primos
 int primo (int n){
        int cont,i;
        cont=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                cont=cont+1;
            }
        }
        return cont;
 }
int main(void){
    int n,cont,i;

//escolhendo o numero
    printf("escolha um numero:");
    scanf("%d",&n);

// percorrer a distancia entre n e 1 e imprimir os numeros primos  entre eles
    while(n>=1){
        n=n-1;
        int p=primo(n);
        if(p==2){
        printf("%d\n",n);
    }

    }
