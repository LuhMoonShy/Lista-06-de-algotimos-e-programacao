//Elabore um programa que identifique o número de algarismos de um valor inteiro positivo informado
//pelo usuário.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int numeroD, numero, contador=0;
		do{
			printf("Informe o número natural que você deseja descobrir a quantidade de dígitos: ");
			scanf("%d", &numeroD);
			if(numeroD<=0){
				printf("Informe apenas números naturais postivos!\n");
			}
		}while(numeroD<=0);	
		numero=numeroD;
		while(numero!=0){
			numero=numero/10;
			contador++;
		}	
		system("cls");
		printf("Número informado: %d.", numeroD);
		printf("\nQuantidade de dígitos para forma-lo: %d.", contador);
return 0;
}
