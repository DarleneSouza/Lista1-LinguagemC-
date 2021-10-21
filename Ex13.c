/*13. Você  foi  encarregado  para  desenvolver  um  programa  com  objetivo  de  armazenar  os  pontos  do  campeonato interno  de  futebol  do  IFSULDEMINAS, 
 assim  seu  programa  deve  receber  o  nome  e  os  gols  de  dois  times,  e apresentar  a  pontuação  que  cada  um  deve  receber  pelo  jogo, 
  levando-se  em  consideração  que  uma  vitória dá 3  pontos, empate  1  ponto  e  derrota  0  ponto. */
#include<stdio.h>
#include<stdlib.h>
main(){
	int gols_timeA,gols_timeB,pontuacao_timeA,pontuacao_timeB;
	printf("Digite os gols do time A: ");
	scanf("%i",&gols_timeA);
	printf("Digite os gols do time B: ");
	scanf("%i",&gols_timeB);
	if(gols_timeA>gols_timeB){
		pontuacao_timeA=3;
		pontuacao_timeB=0;
	}else if(gols_timeB>gols_timeA){
		pontuacao_timeB=3;
		pontuacao_timeA=0;
	}else if(gols_timeA==gols_timeB){
		pontuacao_timeB=1;
		pontuacao_timeA=1;
	}
	printf("A pontuacao do time A e: %i \n",pontuacao_timeA);
	printf("A pontuacao do time B e: %i",pontuacao_timeB);

	return 0;
}
