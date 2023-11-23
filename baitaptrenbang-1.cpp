#include <stdio.h>
main(){
	int n, i, s=0;
	printf("Hay cho mot so n= : ");
	scanf("%d", &n);
	do{
		s += i;
		i++;
	}while(i <= n);
	printf("Tong %d so tu nhien la: %d\n",n, s);
}
