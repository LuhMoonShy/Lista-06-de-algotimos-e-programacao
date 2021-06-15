//Escreva um programa que transforme o computador em uma urna eletrônica para eleição do melhor
//jogador de futebol de todos os tempos. O número 25 é do candidato Pelé e o 33 do candidato Maradona.
//Cada voto será efetivado pelo número do candidato, permitindo-se ainda o voto 0 (em branco) e
//qualquer outro voto diferente dos especificados será considerado nulo. O eleitor deverá sempre ser
//consultado quanto a confirmação do voto. Ao final da eleição deverá ser apresentado um relatório
//contendo:
//• Quantidade de votos de cada candidato;
//• Quantidade de votos em branco e nulos;
//• Nome do candidato vencedor (prever possibilidade de empate).
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int votosPele=0, votosMaradona=0, votosBrancos=0, votosNulos=0, opcao, contador=0, totalVotos=0, vencedor;
		do{
			printf("____________________________________________________________________________\n");
			printf("Votação Melhor Jogador De Futebol De Todos Os Tempos!(Contagem de Votos: %d)\n", contador);
			printf("____________________________________________________________________________\n");
			printf("                           0- Voto Branco                                   \n");
			printf("                               25- Pelé                                     \n");
			printf("                             33- Maradona                                   \n");
			printf("                          10- Fechar votação                                \n");
			printf("____________________________________________________________________________\n");
			printf("            Atenção: Informar outro valor resulta em voto nulo!\n           \n");
			scanf("%d", &opcao);
			switch(opcao){
				case 0:
					votosBrancos++;
					totalVotos++;
				 break;
				case 25:
					votosPele++;
					totalVotos++;
				 break;
				case 33:
					votosMaradona++;
					totalVotos++;
				 break;
				case 10:
				 break;
				default:
					votosNulos++;
					totalVotos++;
				 break;
			}
			contador++;
			system("cls");
		}while(opcao!=10);
		if(votosPele>votosMaradona){
			printf("O Vencedor foi Pelé!\n");
		}
		else if(votosMaradona>votosPele){
			printf("O Vencedor foi Maradona!\n");
		}
		else{
			printf("Pelé e Maradona empataram.\n");
		}
		system("cls");
		printf("Votos finais:.....\n");
		printf("Votos Pelé: %d\n", votosPele);
		printf("Votos Maradona: %d\n", votosMaradona);	
		printf("Votos Brancos: %d\n", votosBrancos);
		printf("Votos Nulos: %d\n", votosNulos);
return 0;
}
