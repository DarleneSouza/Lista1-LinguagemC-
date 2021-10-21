/*6.  Faça  um  programa que  receba dois  números  e  mostre  qual deles  é  o  maior.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int num1,num2;
	printf("Digite o primeiro numero: \n");
	scanf("%i",&num1);
	printf("Digite o segundo numero: \n");
	scanf("%i",&num2);
	if(num1>num2){
		printf("O maior numero e: %i\n",num1);
	}
	else{
		if(num1<num2);
		printf("O maior numero e: %i\n",num2);
	}
	system("pause");
}
