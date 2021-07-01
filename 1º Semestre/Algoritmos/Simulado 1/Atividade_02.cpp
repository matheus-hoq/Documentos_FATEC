#include <stdio.h>
#include <locale.h>

main(){
	
	int n1,n2;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira o 1º número: ");
	scanf("%i",&n1);
	printf("Insira o 2º número: ");
	scanf("%i",&n2);
	
	if (n1==n2){	
	 printf("\n\nOs número são iguais %i %i\n\n",n1,n2);
}
	 
	else if (n1<n2){
	 printf("\n\nOs números são diferentes %i %i\n\n",n1,n2);
}
    else {
    	printf("\n\nOs números são diferentes %i %i\n\n",n2,n1);
	}
}
    


	
