#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	float a,b,c,ma,mh,mg,mp;
	printf("Digite o 1� valor: ");
	scanf("%f",&a);
	printf("Digite o 2� valor: ");
	scanf("%f",&b);
	printf("Digite o 3� valor: ");
	scanf("%f",&c);

	ma = (a+b+c)/3;
	mh = 3/(1/a+1/b+1/c);
	mg = pow(a*b*c, 1.0/3);
	mp = (1*a+2*b+3*c)/6;	

	printf("Média aritmetica:  %.2f\n",ma);
	printf("Média harmonica:   %.2f\n",mh);
	printf("Média geometrica:  %.2f\n",mg);
	printf("Média ponderada:   %.2f\n",mp);
	}
