#include <stdio.h>
#include <locale.h>

main(){

    float peso,altura,imc;
    
    setlocale(LC_ALL,"Portuguese");
    printf("Insira o peso do paciente: ");
    scanf("%f",&peso);
    printf("Insira a altura do paciente: ");
    scanf("%f",&altura);
    
      
    imc=peso/(altura*altura);
    
    if(imc<20){
    	printf("\nAbaixo do peso ideal.");
	}
	else if(imc>=20 && imc<=25){
    	printf("\nPeso normal.");
	}
	else if(imc>25 && imc<=30){
    	printf("\nExcesso de peso.");
	}
	else if(imc>30 && imc<=35){
    	printf("\nObesidade.");
	}
	else if(imc>35){
    	printf("\nObesidade móbida.");
	}




}


