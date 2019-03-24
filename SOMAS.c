#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int soma;
    soma=0;
    while(n!=0){
        printf("digite um numero:");
		scanf("%d",&n);
        soma=soma+n;
    }
    printf("somou:%d\n",soma);
        return 0;
}
