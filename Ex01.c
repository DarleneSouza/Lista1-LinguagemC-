/*1.  Elaborar  um  programa  em  C  que  apresente  o  valor  da  conversão  em  dólar  (US$)  de  um  valor  lido  em  real, 
o programa  deve  solicitar  a  cotação  do  dólar  e  também  a quantidade  de  reais disponível  com  o  usuário.*/
 
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
