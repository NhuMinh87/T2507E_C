#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Nhap lan luot 3 canh cua tam giac: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a+b > c) &&  (a + c > b) && (c + b > a)){
		printf("3 canh tao thanh 1 hinh tam giac");
	}else{
		printf("3 canh khong the tao thanh 1 hinh tam giac");
	}
}