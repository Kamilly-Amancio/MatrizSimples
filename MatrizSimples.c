//MATRIZ
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int matriz[4][4], linha=0,coluna=0;
	
	printf("\n***Insira os dados na Matriz***\n");
	
	for(linha=0; linha<4; linha++){
		
		for(coluna=0; coluna<4; coluna++){
		
			printf("Matriz[%i][%i]:", linha, coluna);
			scanf("%i", &matriz[linha][coluna]);
	
			}
	}
	
	printf("\n***Exibindo os dados na Matriz***\n");
	
	for(linha=0; linha<4; linha++){
		
		for(coluna=0; coluna<4; coluna++){
		
		printf("|%i|", matriz[linha][coluna]);
	
			}
			printf("\n");
	}
	
}
