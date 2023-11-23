#include <stdio.h>

main(){
	int n,s,i;
	printf("Nhap n= "); scanf("%d", &n);
	s = 0;
	i = 1;
	while(i<=n){
		s += i;
		i++;
		if(n%i == 0){
			i *= 3;
			printf("so chan thu ba la %d", i);
			break;
		}
	}
}
