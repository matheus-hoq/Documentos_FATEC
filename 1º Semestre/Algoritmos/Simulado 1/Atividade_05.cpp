#include <stdio.h>
#include <locale.h>

main(){
	
	float n1,n2,media;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Insira a 1ª Nota: ");
	scanf("%f",&n1);
	printf("Insira a 2ª Nota: ");
	scanf("%f",&n2);
	
	media=(n1+n2)/2;
	
	if (media<4){
		printf("\n\nMédia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno reprovado. \n\n");
	}
	else if (media>=4 && media<6){
		printf("\n\nMédia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno em recuperação. \n\n");
	}
	else if(media>=6){
		printf("\n\nMédia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno aprovado. \n\n");
	}
	    
}
