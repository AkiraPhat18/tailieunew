#include <stdio.h>

int main () 
{
	//Khai bao mang
	//dataType Arrayname[sizeofArray];
	int a[10];
	float b[100];
	char c[1000];
	
	//khai bao mang va gan gia tri ban dau
	int x[10] = { };
	int y[3] = {9, 6, 15};
	
	//gan du lieu cho mang	
	//mang bat dau tu vi tri so 0
	y[1] = 10;
	
	scanf("%d", &a[1]);//nhap gia tri tu ban phim 
	printf("Gia tri cua phan tu thu hai trong mang la: %d",a[1]);
	
//	printf("0 - %d\n", y[0]);
//	printf("1 - %d\n", y[1]);
//	printf("2 - %d\n", y[2]);	

	
}
