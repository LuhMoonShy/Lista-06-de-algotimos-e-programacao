//Elabore um programa que identifique o n�mero de algarismos de um valor inteiro positivo informado
//pelo usu�rio.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int numeroD, numero, contador=0;
		do{
			printf("Informe o n�mero natural que voc� deseja descobrir a quantidade de d�gitos: ");
			scanf("%d", &numeroD);
			if(numeroD<=0){
				printf("Informe apenas n�meros naturais postivos!\n");
			}
		}while(numeroD<=0);	
		numero=numeroD;
		while(numero!=0){
			numero=numero/10;
			contador++;
		}	
		system("cls");
		printf("N�mero informado: %d.", numeroD);
		printf("\nQuantidade de d�gitos para forma-lo: %d.", contador);
return 0;
}
