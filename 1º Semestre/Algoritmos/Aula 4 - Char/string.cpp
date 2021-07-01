#include <stdio.h>
main(){
	char nome[20];
	printf("\t\"Nome\": ");
	//scanf("%s",&nome);
	gets(nome);
	printf("Nome digitado: %s\n",nome);
	printf("Pos. 3: %i\n",nome[3]);
}
