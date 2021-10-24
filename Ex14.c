/*14. Construa  um  programa  em  C  para  determinar  se  o  indivíduo  está  com  um  peso  favorável.  Essa  situação  é determinada  através  do  IMC 
 (Índice  de  Massa  Corpórea),  que  é  definida  como  sendo  a  relação  entre  o  peso (PESO)  e  o  quadrado  da Altura (ALTURA) do  indivíduo.  Ou  seja,
 IMC= PESO/ALTURA^2  e,  a situação  do  peso  é  determinada pela tabela  abaixo: 
 -Condição           			-Situação
 IMC abaixo de 20				Abaixo do Peso
 IMC abaixo de 20 até 25		Peso Normal
 IMC abaixo de 25 até 30		Sobre Peso
 IMC abaixo de 30 até 40		Obeso
 IMC  de 40 e acima				Obeso Mórbido
 */
#include<stdio.h>
#include<math.h>
main(){
	float peso,altura,IMC;
	printf("Informe seu peso: ");
	scanf("%f",&peso);
	printf("Informe seu altura : ");
	scanf("%f",&altura);
	IMC=peso/pow(altura,2);
	printf("%.2f ",IMC);
	if(IMC<20){
		printf("Abaixo do Peso \n");
	}else if(IMC>=20&&IMC<25){
		printf("Peso Normal \n");
	}else if(IMC>=25&&IMC<30){
		printf("Sobre Peso \n");
	}else if(IMC>=30&&IMC<40){
		printf("Obeso \n");
	}else{
		printf("Obeso Mórbido");
	} 
	return 0;
}
