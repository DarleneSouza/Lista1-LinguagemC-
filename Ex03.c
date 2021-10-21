/* 3. Usando  switch,  escreva  um  programa  que  leia  um  inteiro  entre  1  e  7  e  imprima  o  dia  da  semana correspondente  a  este  número. 
Isto  e,  domingo  se  1,  segunda-feira se  2,  e  assim  por diante. */
#include<stdio.h>
#include<stdlib.h>
main(){
	int dia;
	printf("Digite um numero entre 1 a 7 correspondente aos dias da semana: \n ");
	scanf("%i",&dia);
	switch(dia){
		case 1:
			printf("domingo\n");
			break;
		case 2:
			printf("segunda-feira\n");
			break;
		case 3:
			printf("terca-feira\n");
			break;
		case 4:
			printf("quarta-feira\n");
			break;
		case 5:
			printf("quinta-feira\n");
			break;
		case 6:
			printf("sexta-feira\n");
			break;
		case 7:
			printf("sabado\n");
			break;
		default:
			printf("Numero invalido!\n");
			break;
	}

	
}
