#include <stdio.h>
#include <conio.h>

main(){
	unsigned int x,i,d,dem;
	float tong;
	tong = 0;dem=0;i=1;
	printf("\nNhap x[%d] = ", i);
	scanf("%d", &x);
	while(x != 0){
		if((x > 0) && (x%2 == 0) && (x%3 != 0)){
			d++;
			tong += x;
		}
		i++;
		printf("\nNhap x[%d] =", i);
		scanf("%d",&x);
	}
	printf("\nTong cac so = %8.3f", tong/d);
}
