#include <stdio.h>
#include <locale.h>

main(){
	
	float p, t=0;
		
	setlocale(LC_ALL,"");
	printf("Peso: ");
	scanf("%f",&p);
	while(p<=100){
		p+=p*0.13;
		t++;		
	}	
	printf("Minutos: %.f\n",t);
}
