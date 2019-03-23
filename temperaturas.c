#include <stdio.h>
int temps[5];
int main (void){
	
	int temp,soma,i,cont;
	float media;
	soma=0;
	cont=0;
	for(i=0;i<5;i++){
		printf("digite uma temperatura menor entre -100 e 100:");
		scanf("%d",&temp);
		temps[i]=temp;
		soma=soma+temps[i];
	}
	media=soma/5;
	for(i=0;i<5;i++){
		if(temps[i]>media){
			cont=cont+1;}
			}
	printf("media: %f\n",media);
	printf("qtd de temperaturas acima da media: %d\n",cont);

	
	
	return 0;
	

}

//criar um vetor para guardar 50 temperaturas; ler as 50 temperaturas para o vetor;calcular a media;exibir a quantidade de leituras acima da media.
