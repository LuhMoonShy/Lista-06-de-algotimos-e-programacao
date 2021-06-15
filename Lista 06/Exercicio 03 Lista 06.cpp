//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de at� 10 pessoas. Fazer
//um programa que calcule e escreva: a maior e a menor altura do grupo; a m�dia da altura das mulheres;
//o n�mero de homens. Usar os tr�s comandos de repeti��o na solu��o do problema.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int altura, contador, sexo, maiorAltura=0, qntdMulher=0, somaAM=0, mediaAM, menorAltura=1000;
	int pessoas, qntdHomens=0, opcao=0;
		while(opcao!=1){
			do{
				printf("Informe o n�mero de participantes (m�ximo de 10): ");
				scanf("%d",&pessoas);
				if(pessoas>10||pessoas<0){
					printf("Informe um valor v�lido: ");		
				}
 			}while(pessoas>10||pessoas<0);
 			printf("\nValor digitado: %d.", pessoas);
 			printf("\n\nDeseja alterar o valor?");
 			printf("\n1- N�o");
 			printf("\n2- Sim\n");
 			scanf("%d",&opcao);
		}
		system("cls");
		for(contador=1;contador<=pessoas;contador++){
			do{
				printf("Informe a altura(em cent�metros) da %d� pessoa: ",contador);
				scanf("%d",&altura);
				if(altura<=0){
					printf("\nInforme uma altura v�lida!");
				}
			}while(altura<=0);
			if(altura>maiorAltura){
				maiorAltura=altura;
			}
			if(altura<menorAltura){
				menorAltura=altura;
			}
			do{
				printf("\nInforme o sexo da %d� pessoa.",contador);
				printf("\n1- Masculino");
				printf("\n2- Feminino\n ");
				scanf("%d",&sexo);
				if(sexo!=1&&sexo!=2){
					printf("\nInforme um valor v�lido!");
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
		printf("\nMaior altura entre os participantes: %d cent�metros.", maiorAltura);
		printf("\nMenor altura entre os participantes: %d cent�metros.", menorAltura);
		printf("\nM�dia da altura das mulheres participantes: %d cent�metros.", mediaAM);
return 0;
}
