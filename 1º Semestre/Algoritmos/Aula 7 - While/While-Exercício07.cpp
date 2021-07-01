#include <stdio.h>
#include <locale.h>
main(){

	
	float c=1,nota,media=0;	
	setlocale(LC_ALL,"");
	while(c<=5){
		printf("Nota %.f:",c);
		scanf("%f",&nota);
		media+=nota;
		c++;
	}
	printf("Soma: %.2f",media);
	printf("Média: %.2f",media/--c);
}
