/*5.  Faça um  programa que  leia  um  número  e,  caso  ele  seja positivo, calcule  e  mostre: 
  O  número  digitado  ao  quadrado  •  A  raiz  quadrada do  número  digitado */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int num,num_quadrado,raiz_quadrada;
	printf("Digite um numero: \n");
	scanf("%i",&num);
	if(num>0){
	num_quadrado=pow(num,2);
	raiz_quadrada=sqrt(num);
	printf("O numero ao quadrado e: %i\n",num_quadrado);
	printf("A raiz quadrada e: %i\n",raiz_quadrada);
	}
	else{
		if(num<0)
		printf("Numero negativo");
	}

}
