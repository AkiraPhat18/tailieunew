#include <stdio.h>

int main() {
	// khai bao chuoi
	// char <ten chuoi> <so ky tu +1>
	// char str[20] tao ra 1 chuoi str co toi da 20 ky tu
	// tao ra chuoi ky tu co do dai cu the hoac chuoi de C tu xac dinh so luong ky tu char str[10] or char[]
	char ten[50];
	printf("Nhap vao ten cua ban: ");
	//scanf("%s", ten);// mang nen ko can chu & // nhap chuoi ko co khoang trang
	fgets(ten, sizeof(ten), stdin);
	//printf("\nTen da nhap la: %s", ten);
	printf("\nTen da nhap la: ");
	puts(ten);
}
