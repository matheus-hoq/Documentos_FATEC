#include <stdio.h>

main(){
	char sx='M'; //não pode sx="M"
	int a;
	scanf("%i",&a);
	printf("Digite o sexo (m/f): ");
	scanf(" %c",&sx);
	printf("\nSexo: %c\n",sx);
}
