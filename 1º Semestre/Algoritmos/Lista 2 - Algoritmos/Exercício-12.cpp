#include <stdio.h>
#include <locale.h>

main(){

    char af;
    float sa;

	setlocale(LC_ALL,"Portuguese");
	printf("(Insira 'p' para produÁ„o ou 'a' para administrativa)\n\n");
	printf("¡rea do funcion·rio: ");
	scanf(" %c",&af);
	printf("Insira o sal·rio do funcion·rio: ");
	scanf("%f",&sa);
	
     switch(af){
     	
     	case 'p':
     	case 'P':
     		
		if(sa>=0 && sa<=700){
			printf("\nAumento de 15%%\n");
			printf("Valor do aumento: %.2f\n",sa*0.15);
			printf("Sal·rio corrigido: %.2f\n",sa*1.15);
			break;
		}
		else if(sa>=700,01 && sa<=1800){
			printf("\nAumento de 10%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.10);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.10);
			break;
		}
		else if(sa>=1800,01 && sa<=2500){
			printf("\nAumento de 7%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.07);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.07);
			break;
		}
		else if(sa>2500){
			printf("\nSem aumento");
			break;
	}
}
	   
	   
	    switch(af){
     	
     	case 'a':
     	case 'A':
	   
	 	
	 	if(sa>=0 && sa<=700){
			printf("\nAumento de 18%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.18);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.18);
			break;
		}
		else if(sa>=700,01 && sa<=1800){
			printf("\nAumento de 12%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.12);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.12);
			break;
		}
		else if(sa>=1800,01 && sa<=2500){
			printf("\nAumento de 8%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.08);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.08);
			break;
		}
		else if(sa>2500){
			printf("\nAumento de 5%%\n");
			printf("Valor do aumento: R$ %.2f\n",sa*0.05);
			printf("Sal·rio corrigido: R$ %.2f\n",sa*1.05);
			break;
	 }
	     default: 
			printf("\n¡rea inv·lida.");
			break;
		
}
}
