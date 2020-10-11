#include <stdio.h>
#include <locale.h>

main(){
	int n;
	setlocale(LC_ALL,"Portuguese");	
	printf("Número: ");
	scanf("%i", &n);
    switch(n){
    	case 9:
    		printf("\nNove\n");
    		break;
    	case 10:
		    printf("\nDez\n");
			break;
		case 11:
		    printf("\nOnze\n");
			break;
		default:
			printf("\nValor fora do intervalo 9 a 11\n");
			break;		
	}
}

