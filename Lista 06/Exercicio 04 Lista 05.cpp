//Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um certo per�odo. Fazer um
//programa que:
//-leia o n�mero de crian�as nascidas no per�odo;
//-leia um n�mero indeterminado de linhas com as informa��es das crian�as que morreram, contendo,
//cada uma, o sexo da crian�a (m -masc., f- fem.) e o n�mero de meses de vida da crian�a. A �ltima linha,
//que n�o entrar� nos c�lculos, cont�m no lugar do sexo o caractere v (vazio). Determine e escreva:
//a) porcentagem de crian�as mortas no per�odo;
//b) porcentagem de crian�as masculinas mortas no per�odo;
//c) porcentagem de crian�as que viveram 24 meses ou menos no per�odo.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int criancasTotal=0, contador=1, criancasMortas=0, meninosMortos=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMeninosMortos, porcentagemPrematuros;
		do{
			printf("Informe o n�mero total de crian�as que nasceram: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nInforme um valor v�lido!\\n ");		
			}
		}while(criancasTotal<=0);
		system("cls");
		printf("A respeito das crian�as que morreram:\n");
		do{
			printf("Informe o sexo da %d� crian�a. [F ou M] (digite V caso n�o tenham mais crian�as falecidas): ", contador);
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'v' && sexoCrianca != 'V');		
			system("cls");
			do{
				printf("Informe quantos meses de vida tem a %d� crian�a (digite qualquer valor caso tenha selecionado v): ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nInforme um valor v�lido!");
				}
			}while(mesesVida<=0);		
			system("cls");
			if(sexoCrianca=='m'||sexoCrianca=='M'){
				meninosMortos++;
			}
			if(mesesVida<=24){
				prematuros++;
			}
			criancasMortas++;
			contador++;
		}while(sexoCrianca != 'v' && sexoCrianca != 'V');
		system("cls");	
		criancasMortas = criancasMortas-1;
		prematuros = prematuros-1;
		porcentagemMortos = criancasMortas*100 / criancasTotal;
		porcentagemMeninosMortos =  meninosMortos*100/ criancasTotal;
		porcentagemPrematuros =  prematuros*100 / criancasTotal;
		printf("Total de crian�as: %d\n", criancasTotal);
		printf("Total de crian�as Mortas: %d\n", criancasMortas);
		printf("Taxa de mortalidade infantil: %d %%\n", porcentagemMortos);
		printf("Taxa de meninos mortos: %d %%\n", porcentagemMeninosMortos);
		printf("Crian�as que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
return 0;
}
