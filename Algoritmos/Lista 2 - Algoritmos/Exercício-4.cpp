#include <stdio.h>
#include <locale.h>

main(){
	
	char sx;
	float p,a,pi;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Sexo (m/f): ");
	scanf(" %c",&sx);
	printf("Altura: ");
	scanf("%f",&a);
	printf("Peso: ");
	scanf("%f",&p);
	
	if(sx=='m' || sx=='M')
	   pi=(72.7*a)-58;
	else
	   pi=(62.1*a)-44.7;
	if(p<=pi)
	   printf("Peso normal ou abaixo: %.2f",p-pi);
	else
	   printf("Peso acima: %.2f",p-pi);         
	
	
}
