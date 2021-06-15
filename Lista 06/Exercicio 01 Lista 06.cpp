//Elabore um programa em C que solicite um valor ao usuário e imprima todos os números pares do
//número fornecido até 2000, em uma janela de execução. Caso o valor informado seja maior que 2000,
//apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
//limite de cálculo foi excedido.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int numeroM,contador;
		printf("Informe um número até 2000: ");
		scanf("%d",&numeroM);
	system("cls");
		if(numeroM>2000){
			printf("Número digitado inválido!");
		}
		else{
			printf("Números pares existentes até o numero %d:",numeroM);	
			for(contador=1;contador<numeroM;contador++){
			contador++;
			printf("\n%d",contador);
			}			
		}
return 0;
}
