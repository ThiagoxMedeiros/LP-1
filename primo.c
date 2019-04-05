#include <stdio.h>


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
int main(void)
{
    int n,cont,i;
    printf("digite um numero:");
    scanf("%d",&n);
    int p=primo(n);
    if(p==2){
       printf("eh primo");
    }
    else{
        printf("nao eh primo");
        }

    return 0;
}
