/*16. Entrada   A  entrada  é  dada  em  uma  única  linha,  que  contém  dois  inteiros  X  e  Y,  que  correspondem  às  coordenadas
do  ponto  (X,  Y)  de  contato  da  bola  com  o  solo,  em  polegadas. 
Saída   Seu  programa  deve  imprimir  uma  única  linha,  contendo  a  palavra  dentro  se  a  bola  bateu  dentro  da  semiquadra,
e  a palavra  fora  caso contrário.*/
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
