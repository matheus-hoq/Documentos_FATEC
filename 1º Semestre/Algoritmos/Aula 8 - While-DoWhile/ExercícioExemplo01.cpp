#include <stdio.h>
#include <locale.h>

main(){
	 float c=1.5,z=1.1,qa=0;
	
	setlocale(LC_ALL,"");
	do{
		c+=0.02; // c=c+0.02
		z+=0.03;
		qa++;
		printf("Ano %.f: C: %.2f Z: %.2f\n",qa,c,z);
	}while(z<=c);
		printf("\nQuantidade de anos: %.f\n",qa);
	
	

}
