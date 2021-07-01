#include <stdio.h>
#include <locale.h>

main(){

    
	int idade;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira a idade do nadador: ");
	scanf("%i",&idade);
	
	if(idade>=5 && idade<=7){
		printf("\nInfantil A");
	}
	else if(idade>=8 && idade<=10){
		printf("\nInfantil B");
	}
	else if(idade>=11 && idade<=13){
	printf("\nInfanto juvenil");
	}
	else if(idade>=14 && idade<=17){
	printf("\nJuvenil");
	}
	else if(idade>=18){
	printf("\nSênior");
	}
	   

}


