#include<stdio.h>

void compra(int* conta, int valor)
{
   *conta = *conta - valor;
}
int main (void)
{
   int compras[] = {100,50,80,30,20};
   int* conta;
   int conta1,conta2;
   printf("digite o valor da conta:\n");
   scanf("%d",&conta1);
   printf("digite o valor da outra  conta:\n");
   scanf("%d",&conta2);
   int i = 0;
   for (i = 0; i<=4;i++)
   {
      if(conta1>=conta2)
      {
         conta = &conta1;
      }
      else
      {
         conta = &conta2;
      }
      compra(conta,compras[i]);
      printf("Apos a compra %d\n Saldo conta 1: %d\n Saldo conta 2: %d\n",i+1,conta1,conta2);
   }

   return 0;
}
