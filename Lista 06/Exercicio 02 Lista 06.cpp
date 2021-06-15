//O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial. O
//fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o
//while.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	long long numero,contador=1,fatorial=1;
		printf("Informe o número desejado para encontrar valor fatorial: ");
		scanf("%lld",&numero);
		if(numero==0){
			fatorial=1;
		}
		else{
			while(contador<=numero){
				fatorial=contador*fatorial; 
				contador++;
			}
		}		
	system("cls");
		printf("O valor fatorial do número %d informado é: %lld.\n",numero,fatorial);
return 0;
}
