/*10. Crie  um  programa  que  receba  2  valores  e  um  operador  aritmético  básico  (+    -   *    /) 
 e  apresente  o  resultado do  cálculo. Utilize  switch case. */
#include<stdio.h>
#include<stdlib.h>
main(){
	float x,y,resultado;
	char op;
	printf("Informe o primeiro valor: ");
	scanf("%f",&x);
	printf("Informe o segundo valor: ");
	scanf("%f",&y);
	printf("Informe um operador basico: ");
	scanf("%s",&op);
	switch(op){
		case '+':
			resultado=x+y;
			break;
		case '-':
			resultado=x-y;
			break;
		case '*':
			resultado=x*y;
			break;
		case '/':
			resultado=x/y;
			break;		
	}
	printf("O resultado do calculo e: %.2f",resultado);
	return 0;
}

