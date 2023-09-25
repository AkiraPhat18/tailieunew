#include <stdio.h>

int main () {
	int age = 26;
	float weight = 50;
	
	printf("Nhap lan luot tuoi va can nang: ");
	
	scanf("%d%f", &age, &weight);//nhap du lieu xong moi thuc hien tiep chuong trinh &... dia chi cua bien
	//scanf: Ðoc du lieu tu bàn phim theo dinh dang da cho.
	// phep chia lay phan nguyen /, phep chia lay so du %
	printf("Nam nay toi %d tuoi. Toi nang %.1f kg", age, weight);
}
