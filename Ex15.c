/*15.Entrada   A  primeira  e  �nica  linha  da  entrada  consiste  de  tr�s  inteiros  separados  por  espa�os,  A,  B  e  C,  as pontua��es  dos  3  competidores.
 Sa�da   Imprima  uma �nica  linha  na  sa�da, contendo  apenas  um  n�mero inteiro,  a  pontua��o  do  vice-campe�o. */
#include<stdio.h>
main(){
	int A,B,C;
	scanf("%i %i %i",&A, &B, &C);
	if((A<B&&A>C)||(A>B&&A<C)){
		printf("%i",A);
	}else if((B<A&&B>C)||(B>A&&B<C)){
		printf("%i",B);
	}else{
		printf("%i",C);
	}
	return 0;
}
