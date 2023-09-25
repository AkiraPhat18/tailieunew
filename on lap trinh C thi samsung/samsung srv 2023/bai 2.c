#include <stdio.h>

int main () {
	int year_of_birth = 1997;
	int age = 2023 - year_of_birth;// gan gia tri dau =
	float weight;
	printf("Nhap lan luot tuoi va can nang: ");
	scanf("%d%f", &year_of_birth, &weight);

	printf("Nam nay toi %d tuoi. Toi nang %.1f kg", age, weight);
	//printf("Hello Phat and Lam Anh!\n");
}
