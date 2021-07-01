#include <stdio.h>
#include <locale.h>
main(){
	
	float hab,a,b;
	int c=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Habitantes: ");
	scanf("%f",&hab);
	
	a=hab;
	b=hab;
	
	while(a - b <= 100000){
		
		a+=a*0.0270;
		b+=b*0.0121;
		
	c++;
	
	}
	
	printf("Anos: %i",c);
}
