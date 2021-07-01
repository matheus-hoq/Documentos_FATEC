#include <stdio.h>
#include <locale.h>

main(){
	char sx;
	float id, tf, t1=0, t2=0, t3=0, t4=0, sid=0, qm=0;
	int i;
	setlocale(LC_ALL,"");
	for(i=1;i<=4;i++){
		printf("\n\n--- Pessoa %i ---\n\n",i);
		printf("Idade: ");
		scanf("%f",&id);
		printf("Sexo: ");
		scanf(" %c",&sx);
		printf("Time favorito: ");
		scanf("%f",&tf);
		if(tf==1)
			t1++;
		if(tf==2)
			t2++;
		if(tf==3)
			t3++;
		if(tf==4){
			t4++;
		sid+=id;	
		}
		if(sx=='m' || sx=='M')
			qm++;
	}
	printf("\nCorinthians: %.2f%%",t1/--i*100);
	printf("\nPalmeiras  : %.2f%%",t2/i*100);
	printf("\nSão Paulo  : %.2f%%",t3/i*100);
	printf("\nSantos     : %.2f%%",t4/i*100);
	printf("\nMédia id. Santos: %.2f%%",sid/t4);
	printf("\nQuantidade masculinos: %.f\n",qm);
}

