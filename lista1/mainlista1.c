#include <stdio.h>
#include <stdlib.h>


int main() {
	int vetor[3];
	int i, j;
	int maior, menor;
	
	printf("Digite 3 valores inteiros: \n");
	
	for(i = 0; i < 3; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	menor = vetor[0];
	
	for(i = 0; i < 3; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}	
	
	printf("Maior valor: %d \nMenor valor: %d", maior, menor);
	
	return 0;
}
