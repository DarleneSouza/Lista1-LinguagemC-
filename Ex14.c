/*14. Construa  um  programa  em  C  para  determinar  se  o  indiv�duo  est�  com  um  peso  favor�vel.  Essa  situa��o  � determinada  atrav�s  do  IMC 
 (�ndice  de  Massa  Corp�rea),  que  �  definida  como  sendo  a  rela��o  entre  o  peso (PESO)  e  o  quadrado  da Altura (ALTURA) do  indiv�duo.  Ou  seja,
 IMC= PESO/ALTURA^2  e,  a situa��o  do  peso  �  determinada pela tabela  abaixo: 
 -Condi��o           			-Situa��o
 IMC abaixo de 20				Abaixo do Peso
 IMC abaixo de 20 at� 25		Peso Normal
 IMC abaixo de 25 at� 30		Sobre Peso
 IMC abaixo de 30 at� 40		Obeso
 IMC  de 40 e acima				Obeso M�rbido
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
		printf("Obeso M�rbido");
	} 
	return 0;
}
