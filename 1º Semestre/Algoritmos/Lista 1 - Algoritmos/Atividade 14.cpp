#include <stdio.h>

main(){
	float ap, cp, qt;
	printf("Altura da parede em metros: ");
	scanf("%f", &ap);
	printf("Comprimento da parede em metros: ");
	scanf("%f", &cp);
	qt=(ap*cp)/(0.325*0.225);
	qt=(ap/0.225)*(cp/0.325);
	printf("\nQuantidade de tijolos: %.f\n",qt);
}
