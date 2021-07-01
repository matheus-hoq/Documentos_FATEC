#include <stdio.h>
#include <locale.h>

main(){
   
    float vmp,vdm; //vmp = velocidade maxima permitida, vdm = velocidade do motorista

	setlocale(LC_ALL,"Portuguese");
	printf("Velocidade máxima permitida na avenida: ");
	scanf("%f",&vmp);
	printf("\nVelocidade do motorista: ");
	scanf("%f",&vdm);
	
	if(vdm-vmp<=10){
		printf("\nA multa será: R$50,00\n\n");
	}
	else if(vdm-vmp==11 || vdm-vmp<=30){
		printf("\nA multa será: R$100,00\n\n");
	}
	else if(vdm-vmp>31){
		printf("\nA multa será: R$200,00\n\n");
	}

}


