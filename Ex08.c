/*8.  O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica  com  a  percentagem  do  distribuidor  e dos  impostos  (aplicados  ao  custo  de  fábrica). 
 Supondo  que  a  percentagem  do  distribuidor  seja  de  25%  e  os impostos  de  42%,  escrever  um  programa  em  C  que  receba  o  custo  de  fábrica  de  um  carro  e  escreva  o  custo ao  consumidor.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float custo_fabrica, porcentagem_distribuidor,soma,imposto;
	printf("Informe o custo de fabrica de um carro: ");
	scanf("%f",&custo_fabrica);
	porcentagem_distribuidor = 25*custo_fabrica/100;
	imposto= 42*custo_fabrica/100;
	soma = custo_fabrica+porcentagem_distribuidor+imposto;
	printf("Custo do consumidor e: %.2f",soma);
	return 0;
}
