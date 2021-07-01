#include <stdio.h>
#include <locale.h>

main(){
	
	float sf,tv,comissao,INSS,salario;
	
	
	setlocale(LC_ALL,"Portuguese");
	printf("Insira o salário fixo: ");
	scanf("%f",&sf);
	printf("Insita o total de vendas no mês: ");
	scanf("%f",&tv);
	
	
	comissao=(tv*0.15);
	printf("\n\nComissão: %.2f\n\n",comissao);
	INSS=(sf+comissao)*0.11;
	printf("\n\nINSS: %.2f\n\n",INSS);
	salario=sf+comissao-INSS;
	printf("\n\nSalário: %.2f\n\n",salario);
	
	
	
}
