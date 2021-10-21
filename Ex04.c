/*4.  Faça um  programa para  calcular a área  de  um  cilindro  dada sua formula.*/
#include<stdio.h> 
#include<stdlib.h>
main(){
	float A,r,h;
	printf("Informe o valor do raio do cilindro: \n");
	scanf("%f",&r);
	printf("Informe o valor da altura do cilindro: \n");
	scanf("%f",&h);
	A=2*3.14*r*(r+h);
	printf("A area do cilindro e de: %.2f\n",A);
	system("pause");
}
