/*9.  Efetuar o  c�lculo  da quantidade  de  litros de  combust�vel gastos em  uma viagem,  utilizando-se  um  autom�vel que  faz  N  Km  por  litro. 
 Para  obter  o  c�lculo,  o  usu�rio  dever�  fornecer  o  tempo  gasto  e  a  velocidade  m�dia da  viagem. 
  Desta  forma,  ser�  poss�vel  obter  a  dist�ncia  percorrida  com  a  f�rmula  DISTANCIA  <-- TEMPO  * VELOCIDADE.  
  Tendo  o  valor  da  distancia,  basta  calcular  a  quantidade  de  litros  de  combust�vel  utilizada  na viagem  com  a  f�rmula:  LITROS_USADOS  <--  
  DISTANCIA  /N.  O  programa em  C  dever�  apresentar os valores  da dist�ncia  percorrida e  a  quantidade  de  litros utilizados na viagem. */
#include<stdio.h>
#include<stdlib.h>
main(){
	float tempo,velocidade,distancia,litros_usados,N;
	printf("Informe o numero de km por litro do automovel: ");
	scanf("%f",&N);
	printf("Forneca o tempo gasto da viagem: ");
	scanf("%f",&tempo);
	printf("Forneca a velocidade media gasta na viagem: ");
	scanf("%f",&velocidade);
	distancia=tempo*velocidade;
	litros_usados=distancia/N;
	printf("A distancia percorrida foi de: %.2f \n",distancia);
	printf("A quantidade de litros utilizados na viagem foi de: %.2f",litros_usados);
	return 0;
}
