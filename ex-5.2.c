#include<stdio.h>

void compra(int* conta, int valor)
{
   *conta=*conta - valor;
}
int main (void)
{
   int* conta;
   int conta1,conta2,minhaconta;
   printf("digite o valor da conta:\n");
   scanf("%d",&conta1);
   printf("digite o valor da outra  conta:\n");
   scanf("%d",&conta2);
   if(conta1>conta2)
   {
      conta = &conta1;
   }
   else
   {
      conta = &conta2;
   }
   compra(conta,500);
   minhaconta = conta1 + conta2;
   printf("Saldo conta 1: %d\n Saldo conta 2: %d\n Saldo das duas contas juntas: %d",conta1,conta2, minhaconta);

   return 0;
}
