#include <stdio.h>
#include <locale.h>

main(){

   
    float nota,faltas;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira a nota do aluno: ");
	scanf("%f",&nota);
	printf("Insira a quantidade de faltas do aluno: ");
	scanf("%f",&faltas);
	
	if(faltas<10){
		if(nota>=9 && nota<=10){
			printf("\nConceito: A");
		}
		else if(nota>=7.5 && nota<=8.9){
			printf("\nConceito: B");
		}
		else if(nota>=5 && nota<=7.4){
			printf("\nConceito: C");
		}
		else if(nota>=4 && nota<=4.9){
			printf("\nConceito: D");
	    }
	    else if(nota>=0 && nota<=3.9){
			printf("\nConceito: E");
		}
	}
	else{
		if(nota>=9 && nota<=10){
			printf("\nConceito: B");
		}
		else if(nota>=7.5 && nota<=8.9){
			printf("\nConceito: C");
		}
		else if(nota>=5 && nota<=7.4){
			printf("\nConceito: D");
		}
		else if(nota>=4 && nota<=4.9){
			printf("\nConceito: E");
	    }
	    else if(nota>=0 && nota<=3.9){
			printf("\nConceito: E");
	}

}
}
