//Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares do
//n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000,
//apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
//limite de c�lculo foi excedido.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int numeroM,contador;
		printf("Informe um n�mero at� 2000: ");
		scanf("%d",&numeroM);
	system("cls");
		if(numeroM>2000){
			printf("N�mero digitado inv�lido!");
		}
		else{
			printf("N�meros pares existentes at� o numero %d:",numeroM);	
			for(contador=1;contador<numeroM;contador++){
			contador++;
			printf("\n%d",contador);
			}			
		}
return 0;
}
