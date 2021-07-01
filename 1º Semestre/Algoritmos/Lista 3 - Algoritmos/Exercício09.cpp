#include <stdio.h>
#include <locale.h>
main(){
	
	char nc[20], resp;
	float l, c, ac, tr=0;
	
	setlocale(LC_ALL,"");
	do{
		printf("Nome do cômodo: ");
		scanf("%s",&nc);
		printf("Largura: ");
		scanf("%f",&l);
		printf("Comprimento: ");
		scanf("%f",&c);
		ac=l*c;
		printf("O cômodo %s possui %.2f metros\n\n",nc,ac);
		tr+=ac;
		printf("Deseja continuar? (s/n): ");
		scanf(" %c",&resp);
	}while(resp=='s' || resp=='S');
	printf("\n\nTotal da residência: %.1f metros\n",tr);
	
}
	

