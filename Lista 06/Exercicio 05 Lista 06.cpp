//Uma companhia de teatro planeja dar uma série de espetáculos. A direção calcula que a R$15,00 o
//ingresso, serão vendidos 120 ingressos, e as despesas montarão R$600,00. A uma diminuição de R$3,00
//nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva
//uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-o variar de R$15,00 a
//R$3,00 de 3 em 3 reais. Escreva, ainda, o lucro máximo esperado, o preço e o número de ingressos
//correspondentes.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("______________________________________________________________________________________\n");
	printf("|                                  TABELA DE LUCROS                                  |\n");
	printf("|====================================================================================|\n");
	printf("|    Preço do Ingresso      |    Número de Ingressos Vendidos    |       Lucro       |\n");
	printf("|===========================|====================================|===================|\n");
	printf("|             15            |                120                 |      R$ 1200      |\n");
	printf("|             12            |                146                 |      R$ 1152      |\n");
	printf("|             9             |                172                 |      R$ 948       |\n");
	printf("|             6             |                198                 |      R$ 588       |\n");
	printf("|             3             |                224                 |      R$ 72        |\n");
	printf("|___________________________|____________________________________|___________________|\n");	
	printf("======================================================================================\n");
	printf("  O lucro máximo esperado é R$ 1200,00,para 120 ingressos vendidos por R$ 15,00 cada. \n");
	printf("======================================================================================\n");	
}
