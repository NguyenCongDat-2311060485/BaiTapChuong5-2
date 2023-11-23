#include <stdio.h>
#include <conio.h>
main(){
	unsigned int n,i,tong;
	printf("\nNhap vao so nguyen duong n: "); scanf("%d", &n);
	tong = 0; i =1;
	while(i<=n){
		if(i%2 == 0) tong +=i;
		i++;
	}
	printf("\nTong cac so chan tu 1 den %d la %d", n, tong);
	
}
