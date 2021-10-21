/*2.  Faça um  programa em  C  para efetuar  a  conversão  de  um  valor  dado  em  Mbps para  Kbps.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float valorMbps, Mbps_Kbps;
	printf("Digite um valor em Mbps: \n");
	scanf("%f",&valorMbps);
	Mbps_Kbps=valorMbps*1024;
	printf("A conversao do valor em Mbps para Kbps e de: %.2f\n",Mbps_Kbps);
	system("pause");
}

