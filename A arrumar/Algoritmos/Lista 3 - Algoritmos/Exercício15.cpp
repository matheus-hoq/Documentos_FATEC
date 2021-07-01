#include <stdio.h>
#include <locale.h>
main(){

	int s=92, x, qd;

	setlocale(LC_ALL,"");
	while(s<=1478){
		x=1;
		qd=0;
		while(x<=s){
		if(s%x==0)
			qd++;
		x++;
}
	if(qd==2)
	printf("Primo: %i\n",s);
		s++;
}
}


