/*12. Construa  um  programa  em  C  que  determine  (imprima)  se  um  dado  n�mero  N  inteiro  (recebido  atrav�s  do teclado)  �  PAR  ou  �MPAR.
  (Usar o  operador  resto:  Ex:  N%2)). */
#include<stdio.h>
#include<stdlib.h>
main(){
	int N;
	printf("Digite um numero: ");
	scanf("%i",&N);
	if(N%2==0){
		printf("Numero par \n");
	}else{
		printf("Numero impar");
	}
	return 0;
}

