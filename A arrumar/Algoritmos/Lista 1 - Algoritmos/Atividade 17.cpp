#include <stdio.h>
#include <locale.h>

main(){
	float na, vd, vpd, ta;
	setlocale(LC_ALL,"Portuguese");
	printf("Número de apartamentos: ");
	scanf("%f",&na);
	printf("Valor da diária: ");
	scanf("%f",&vd);
	vpd=vd*0.75;
	printf("\nValor promocional da diaria: %.2f\n\n",vpd);
	ta=vpd*na;
	printf("\nArrecadado com ocupação 100%%: %.2f\n\n",ta);
	printf("\nArrecadado com ocupação 70%%: %.2f\n\n",ta*0.70);
	printf("\nDeixa de arrecadar: %.2f\n",(na*vd)-ta);
}
