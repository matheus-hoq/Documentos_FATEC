#include <stdio.h>
#include <locale.h>
main(){

	
	float c=1,nota=1,media=0;	
	setlocale(LC_ALL,"");
	while(nota!=0){
		printf("Nota %.f: ",c);
		scanf("%f",&nota);
		media+=nota;
		c++;
	}
	printf("\nSoma: %.2f\n",media);
	printf("Média: %.2f\n",media/(c-2));
}
