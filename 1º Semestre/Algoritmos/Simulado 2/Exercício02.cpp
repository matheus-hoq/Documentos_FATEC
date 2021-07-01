#include <stdio.h>
#include <locale.h>
main(){

	char cor;
	int i;
	float peso, mp=0, qr=0, ql=0, p=0,q;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(i=1;i<=3;i++){
		printf("\n\n--- Pesquisa %i ---\n",i);
		printf("\nCor cabelo: ");
		scanf(" %c",&cor);
		printf("Peso: ");
		scanf("%f",&p);
		if(p>mp)
			mp=p;
		if(cor=='r' || cor=='R')
			qr++;
		if(cor=='l' || cor=='L')
			ql++;
		if(p>60 && cor!='p' && cor!='P')
			q++;
	}
	printf("\n\nMaior peso: %.2f\n",mp);
	printf("%% Cab. ruivos: %.2f%%\n",qr/--i*100);
	printf("%% Cab. louros: %.2f%%\n",ql/i*100);
	printf("Quantidade pessoas >60 s/ cab. preto: %.f\n",q);
}
