#include <stdio.h>

int main(void)
{
    int preco;
    int dolar;
    printf("digite o valor do celular:");
    scanf("%d",&dolar);
    preco=(dolar*3.17);
    if(preco<1000){
        printf("Bom negocio!\n");
    }else{
        printf("Mau negocio, nao compre!!\n");
        }
    return 0;
}
