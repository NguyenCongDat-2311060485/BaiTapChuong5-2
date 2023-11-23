#include <stdio.h>
#include <conio.h>

main(){
	char hten[30];
	float dtb;
	int d=0, i=1;
	do {
		printf("\nNhap ten sinh vien thu %d", i);
		scanf("%s", &hten);
		printf("\nNhap diem trung binh: ");
		scanf("%f", &dtb);
		if((dtb >=8 ) && (dtb <= 10)){
			d++;
			i++;
		}
	}while((dtb>=0) && (dtb<=10));
	printf("\nSo luong SV co DTB >= 8 la: %5d", d);
}
