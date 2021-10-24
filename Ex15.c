/*15.Entrada   A  primeira  e  única  linha  da  entrada  consiste  de  três  inteiros  separados  por  espaços,  A,  B  e  C,  as pontuações  dos  3  competidores.
 Saída   Imprima  uma única  linha  na  saída, contendo  apenas  um  número inteiro,  a  pontuação  do  vice-campeão. */
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
