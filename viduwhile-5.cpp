#include <stdio.h>
#include <conio.h>
main(){
	int x;
	char i,ans;
	do{
		x = 0;
		ans = 'y';
		printf("\nNhap chuoi ki tu: ");
		do{
			i = getchar();
			x++;
		}while (i != '\n');
		printf("\nSo luong cac ki tu trong chuoi la:  %d", --x);
		printf("\nBan co tiep tuc khong (Y/N) ?");
		ans = getch();
	}while(ans == 'Y' || ans == 'y');
}
