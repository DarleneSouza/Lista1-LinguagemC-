/*16. Entrada   A  entrada  �  dada  em  uma  �nica  linha,  que  cont�m  dois  inteiros  X  e  Y,  que  correspondem  �s  coordenadas
do  ponto  (X,  Y)  de  contato  da  bola  com  o  solo,  em  polegadas. 
Sa�da   Seu  programa  deve  imprimir  uma  �nica  linha,  contendo  a  palavra  dentro  se  a  bola  bateu  dentro  da  semiquadra,
e  a palavra  fora  caso contr�rio.*/
#include<stdio.h>
main(){
	int X,Y;
	scanf("%i %i",&X,&Y);
	if((X<0||X>432)||(Y<0||Y>468)){
		printf("fora");
	}else{
		printf("dentro");
	}
	return 0;
}
