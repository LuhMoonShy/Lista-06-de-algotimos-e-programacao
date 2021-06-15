//Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um
//programa que:
//-leia o número de crianças nascidas no período;
//-leia um número indeterminado de linhas com as informações das crianças que morreram, contendo,
//cada uma, o sexo da criança (m -masc., f- fem.) e o número de meses de vida da criança. A última linha,
//que não entrará nos cálculos, contém no lugar do sexo o caractere v (vazio). Determine e escreva:
//a) porcentagem de crianças mortas no período;
//b) porcentagem de crianças masculinas mortas no período;
//c) porcentagem de crianças que viveram 24 meses ou menos no período.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int criancasTotal=0, contador=1, criancasMortas=0, meninosMortos=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMeninosMortos, porcentagemPrematuros;
		do{
			printf("Informe o número total de crianças que nasceram: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nInforme um valor válido!\\n ");		
			}
		}while(criancasTotal<=0);
		system("cls");
		printf("A respeito das crianças que morreram:\n");
		do{
			printf("Informe o sexo da %dª criança. [F ou M] (digite V caso não tenham mais crianças falecidas): ", contador);
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'v' && sexoCrianca != 'V');		
			system("cls");
			do{
				printf("Informe quantos meses de vida tem a %dª criança (digite qualquer valor caso tenha selecionado v): ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nInforme um valor válido!");
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
		printf("Total de crianças: %d\n", criancasTotal);
		printf("Total de crianças Mortas: %d\n", criancasMortas);
		printf("Taxa de mortalidade infantil: %d %%\n", porcentagemMortos);
		printf("Taxa de meninos mortos: %d %%\n", porcentagemMeninosMortos);
		printf("Crianças que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
return 0;
}
