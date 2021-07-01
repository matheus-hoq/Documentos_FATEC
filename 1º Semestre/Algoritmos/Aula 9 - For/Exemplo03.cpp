#include <stdio.h>
#include <locale.h>
main(){

	int c,n,qd,s;

	setlocale(LC_ALL,"");
	printf("Número: ");
	scanf("%i",&n);
	for(s=1;s<=n;s++){
		qd=0;
		for(c=1;c<=s;c++){
			if(s%c==0)
			qd++;
		}
		if(qd==2)
		printf("%i     ",s);
	}

}


