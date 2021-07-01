#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	float a,b,c,ma,mh,mg,mp;
	printf("Digite o 1º valor: ");
	scanf("%f",&a);
	printf("Digite o 2º valor: ");
	scanf("%f",&b);
	printf("Digite o 3º valor: ");
	scanf("%f",&c);
	ma=(a+b+c)/3;
	mh=3/(1/a+1/b+1/c);
	mg=pow(a*b*c, 1.0/3);
	mp=(1*a+2*b+3*c)/6;	
	printf("Media aritmetica:  %.2f\n",ma);
	printf("Media harmonica:   %.2f\n",mh);
	printf("Media geometrica:  %.2f\n",mg);
	printf("Media ponderada:   %.2f\n",mp);
	}
