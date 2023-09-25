#include <stdio.h>

int main () {
	int year_of_birth = 1997;
	int age = 2023 - year_of_birth;// gan gia tri dau =
	float weight;
	printf("Nhap  tuoi cua ban : ");
	scanf("%d", &year_of_birth);

	//printf("Nam nay toi %d tuoi. Toi nang %.1f kg", age, weight);
	//printf("Hello Phat and Lam Anh!\n");
	
	if (age >= 18) {
		printf("Du tuoi di tu");
	}else {
		printf("Khong du tuoi di tu");
	}
}
