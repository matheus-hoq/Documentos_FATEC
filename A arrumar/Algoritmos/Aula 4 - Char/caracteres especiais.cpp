#include <stdio.h>
#include <locale.h>

main(){
	printf("Acentuação com erro!\n\n");
	setlocale(LC_ALL,"Portuguese");//portuguese não é necessário
	printf("Acentuação funcionou!\n\n");
	
	float a=5.75;
	scanf("%f",&a);
	printf("\n%f\n\n",a);
	
	
}
