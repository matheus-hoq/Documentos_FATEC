#include <stdio.h>
#include <locale.h>

main(){
	float ht,vh,sb,in,ir;
	setlocale(LC_ALL,"Portuguese");
	printf("Horas trabalhadas: ");
	scanf("%f", &ht);
	printf("Valor hora: ");
	scanf("%f",&vh);
	sb=ht*vh;
	if(sb<=868.29)
	   in=sb*0.0765;
    else if(1447.14)
       in=sb*0.08;
    else if(2894.28)
	   in=sb*0.09;
	else 
	   in=sb+0.11;
	if(sb-in<=1499.15)
	   ir=0;
	else if(sb-in<=3743.19)
	   ir=(sb-in)*0.15-224.87;
	else            
	   ir=(sb-in)*0.275-561.02;
	   printf("\nSalário bruto %.2f\n",sb);
	   printf("\nINSS %.2f\n",in);
	   printf("\nIRPF %.2f\n",ir);
	   printf("\nSalário líquido %.2f\n",sb-(in+ir));
}
