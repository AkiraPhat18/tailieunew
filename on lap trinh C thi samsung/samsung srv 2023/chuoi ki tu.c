#include <stdio.h>

int main() {
	char ten[50];
	printf("Nhap vao ten cua ban: ");
	//scanf("%s", ten);// mang nen ko can chu & // nhap chuoi ko co khoang trang
	fgets(ten, sizeof(ten), stdin);
	//printf("\nTen da nhap la: %s", ten);
	printf("\nTen da nhap la: ");
	puts(ten);
}
