/*1.  Elaborar  um  programa  em  C  que  apresente  o  valor  da  convers�o  em  d�lar  (US$)  de  um  valor  lido  em  real, 
o programa  deve  solicitar  a  cota��o  do  d�lar  e  tamb�m  a quantidade  de  reais dispon�vel  com  o  usu�rio.*/
 
 #include<stdio.h>
#include<stdlib.h>
 main(){
 	float valorReal,valorDolar,cotacaoDolar;
 	printf("Solicite a quantidade do valor em reais do usuario:\n ");
 	scanf("%f",&valorReal);
 	printf("Solicite a cotacao do dolar: \n");
 	scanf("%f",&cotacaoDolar);
 	valorDolar=valorReal/cotacaoDolar;
 	printf("A conversao em dolar do valor em rais sera de: %.2f\n",valorDolar);
 	system("pause");
 }
