/*7.  Um reality  show  realizou  uma  prova  onde  os  participantes  tinham  que  buscas  bolas  de  3  cores  diferentes, 
 e de  acordo  com  a  tabela  abaixo  cada um  teria  uma  pontuação:
 Bola  Verde:  10  pontos,  Bola amarela:  5  pontos, Bola branca:  3  pontos 
 Construa  um  programa  em  C  que  leia  a  quantidade  de  bolas  de  cada  cor  e  apresente  a  pontuação  final  do participante. */
#include<stdio.h>
#include<stdlib.h>
main(){
	int bolaV,bolaA,bolaB,pontuacaoF=0;
	printf("Digite a quantidade de bolas verde: \n");
	scanf("%d",&bolaV);
	printf("Digite a quantidade de bolas amarela: \n");
	scanf("%d",&bolaA);
	printf("Digite a quantidade de bolas branca: \n");
	scanf("%d",&bolaB);
	pontuacaoF+=(bolaV*10);
	pontuacaoF+=(bolaA*5);
	pontuacaoF+=(bolaB*3);
	printf("A pontuacao final do participante e de: %d\n",pontuacaoF);
	system("pause");

}
