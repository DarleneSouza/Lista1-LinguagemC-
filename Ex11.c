/*11. Crie  um  programa  em  C  que   leia  a   idade  de  uma pessoa e   informe  a sua  classe  eleitoral:  
 	-   não eleitor  (abaixo  de  16  anos); 
	-   eleitor  obrigatório  (entre  a faixa  de  18  e menor  de  65  anos);  
  	-   eleitor  facultativo  (de  16  até  18  anos  e maior  de  65  anos,  inclusive). */
#include<stdio.h>
#include<stdlib.h>
main(){
	int idade;
	printf("Digite sua idade:" );
	scanf("%i",&idade);
	if(idade<16){
		printf("Não eleitor \n");
	}else if(idade>=18&&idade<65){
		printf("Eleitor obrigatorio \n");
	}else if((idade>=16&&idade<18)||(idade>=65)){
		printf("Eleitor facultativo");
	}
	return 0;
}
