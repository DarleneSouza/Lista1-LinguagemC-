/*9.  Efetuar o  cálculo  da quantidade  de  litros de  combustível gastos em  uma viagem,  utilizando-se  um  automóvel que  faz  N  Km  por  litro. 
 Para  obter  o  cálculo,  o  usuário  deverá  fornecer  o  tempo  gasto  e  a  velocidade  média da  viagem. 
  Desta  forma,  será  possível  obter  a  distância  percorrida  com  a  fórmula  DISTANCIA  <-- TEMPO  * VELOCIDADE.  
  Tendo  o  valor  da  distancia,  basta  calcular  a  quantidade  de  litros  de  combustível  utilizada  na viagem  com  a  fórmula:  LITROS_USADOS  <--  
  DISTANCIA  /N.  O  programa em  C  deverá  apresentar os valores  da distância  percorrida e  a  quantidade  de  litros utilizados na viagem. */
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
