#include <stdio.h>
#include <locale.h>

main(){
	char resp;
	
    setlocale(LC_ALL,"Portuguese");		
	printf("Resposta (s/n): ");
	scanf(" %c",&resp);
	switch(resp){
		case 's':
		case 'S':
	        printf("\nSim\n\n");
	        break;
	    case 'n':
	    case 'N':
		    printf("\nNão\n\n");
		    break;
		default:
		    printf("\nResposta inválida\n\n");       
}
}
