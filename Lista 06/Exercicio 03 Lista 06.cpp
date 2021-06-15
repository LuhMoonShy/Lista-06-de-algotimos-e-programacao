//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de até 10 pessoas. Fazer
//um programa que calcule e escreva: a maior e a menor altura do grupo; a média da altura das mulheres;
//o número de homens. Usar os três comandos de repetição na solução do problema.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int altura, contador, sexo, maiorAltura=0, qntdMulher=0, somaAM=0, mediaAM, menorAltura=1000;
	int pessoas, qntdHomens=0, opcao=0;
		while(opcao!=1){
			do{
				printf("Informe o número de participantes (máximo de 10): ");
				scanf("%d",&pessoas);
				if(pessoas>10||pessoas<0){
					printf("Informe um valor válido: ");		
				}
 			}while(pessoas>10||pessoas<0);
 			printf("\nValor digitado: %d.", pessoas);
 			printf("\n\nDeseja alterar o valor?");
 			printf("\n1- Não");
 			printf("\n2- Sim\n");
 			scanf("%d",&opcao);
		}
		system("cls");
		for(contador=1;contador<=pessoas;contador++){
			do{
				printf("Informe a altura(em centímetros) da %dª pessoa: ",contador);
				scanf("%d",&altura);
				if(altura<=0){
					printf("\nInforme uma altura válida!");
				}
			}while(altura<=0);
			if(altura>maiorAltura){
				maiorAltura=altura;
			}
			if(altura<menorAltura){
				menorAltura=altura;
			}
			do{
				printf("\nInforme o sexo da %dª pessoa.",contador);
				printf("\n1- Masculino");
				printf("\n2- Feminino\n ");
				scanf("%d",&sexo);
				if(sexo!=1&&sexo!=2){
					printf("\nInforme um valor válido!");
				}
			}while(sexo!=1&&sexo!=2);
			if(sexo==2){
				qntdMulher++;
				somaAM=somaAM+altura;
			}
			else if(sexo==1){
				qntdHomens++;
			}
		}
		mediaAM = somaAM/qntdMulher;	
		system("pause");
		system("cls");
		printf("Quantidade de Homens: %d", qntdHomens);
		printf("\nMaior altura entre os participantes: %d centímetros.", maiorAltura);
		printf("\nMenor altura entre os participantes: %d centímetros.", menorAltura);
		printf("\nMédia da altura das mulheres participantes: %d centímetros.", mediaAM);
return 0;
}
