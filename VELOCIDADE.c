#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int km;
    int mph;
    printf("digite a velocidade em milhas por hora:");
    scanf("%d",&mph);
    km=(mph*1.6);
    if(km>100){
        printf("DESACELERE!\n");
    }else if(km<80){
        printf("ACELERE!!\n");
        } else{
            printf("MANTENHA\n");
            }
    return 0;
}
