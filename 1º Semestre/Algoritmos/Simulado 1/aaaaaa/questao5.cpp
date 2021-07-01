#include <stdio.h>
#include <locale.h>

main(){

	float nota1,nota2,media;

	setlocale(LC_ALL,"Portuguese");
	printf("Nota 1: ");
	scanf("%f",&nota1);
	printf("Nota 2: ");
	scanf("%f",&nota2);
	
	media=(nota1+nota2)/2;
	
	if(media<4){
		printf("\n\nMédia: %.1f\n",media);
		printf("Aluno reprovado");
	}
	else if(media>=4 && media<6){
		printf("\n\nMédia: %.1f\n",media);
		printf("Aluno em recuperação");
	}
	else if(media>=6){
		printf("\n\nMédia: %.1f\n",media);
		printf("Aluno aprovado");
	}
}


