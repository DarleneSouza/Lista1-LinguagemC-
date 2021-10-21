/*12. Construa  um  programa  em  C  que  determine  (imprima)  se  um  dado  número  N  inteiro  (recebido  através  do teclado)  é  PAR  ou  ÍMPAR.
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

