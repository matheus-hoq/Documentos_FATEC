#include <stdio.h>
#include <locale.h>

main(){

	char tp;
	float qntd;

	setlocale(LC_ALL,"Portuguese");
	printf("Código da mensagem: ");
	scanf(" %c",&tp);
	printf("Quantidade de massagens: ");
	scanf("%f",&qntd);
	
	switch(tp){
		
		case't':
		case'T':
			
			if(qntd<=4){
				printf("\nValor a ser pago: R$ %.2f",qntd*150);
			}
			else if(qntd>4 && qntd<=8){
				printf("\nValor a ser pago: R$ %.2f",qntd*130);
			}
			else if(qntd>8){
				printf("\nValor a ser pago: R$ %.2f",qntd*125);
			}
			break;
			
		case's':
		case'S':
			
			if(qntd<=4){
				printf("\nValor a ser pago: R$ %.2f",qntd*170);
			}
			else if(qntd>4 && qntd<=8){
				printf("\nValor a ser pago: R$ %.2f",qntd*165);
			}
			else if(qntd>8){
				printf("\nValor a ser pago: R$ %.2f",qntd*155);
			}
			break;
			
		case'c':
		case'C':
			
			if(qntd<=4){
				printf("\nValor a ser pago: R$ %.2f",qntd*200);
			}
			else if(qntd>4 && qntd<=8){
				printf("\nValor a ser pago: R$ %.2f",qntd*180);
			}
			else if(qntd>8){
				printf("\nValor a ser pago: R$ %.2f",qntd*175);
			}		
			break;
	}

}
