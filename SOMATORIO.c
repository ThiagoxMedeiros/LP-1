#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int somatorio;
    int i;
    int cont;
    somatorio=0;
    cont=0;


    printf("digite o numero de n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cont=i*i;
        somatorio=somatorio+cont;

    }
    printf("o  somatorio de n eh %d\n", somatorio);

    return 0;
}
