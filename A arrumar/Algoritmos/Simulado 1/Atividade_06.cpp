#include <stdio.h>
#include <locale.h>

main(){
	
	char m;
	int qnt;
	
	printf("Insira o tipo de massagem: ");
	scanf(" %c",&m);
	printf("Insira a quantidade de massagens: ");
	scanf("%f",&qnt);
	
	switch(m){
		case't':
		case'T':
		
		if(qnt<=4){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*150);
		}
		else if(qnt>=5 && qnt<=8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*130);
		}
		else if(qnt>8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*125);
		
		case's':
		case'S':
		
		if(qnt<=4){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*170);
		}
		else if(qnt>=5 && qnt<=8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*165);
		}
		else if(qnt>8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*155);
		}
		
		case'c':
		case'C':
		
		if(qnt<=4){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*200);
		}
		else if(qnt>=5 && qnt<=8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*180);
		}
		else if(qnt>8){
			printf("\n\nValor a pagar: %.2f\n\n",qnt*175);
		}}
	}
	
	
	
}
