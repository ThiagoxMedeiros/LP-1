#include <stdio.h>

int main (void){
	int n1;
	int n2;
	printf("escolha um numero:"\n);
	scanf("%d",&n1);
	printf("escolha outro numero:"\n);
	scanf("%d",&n2);
 	if (n1>n2){
		printf("maior %d\n",n1);
		}
	else if (n1<n2){
			printf("maior %d\n",n2);
			}
		 else {
		 	printf("iguais\n");
		 }
	return 0;
}
