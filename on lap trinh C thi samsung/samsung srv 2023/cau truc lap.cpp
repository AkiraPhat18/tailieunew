#include <stdio.h>

int main () {
	int year_of_birth;
	printf("Nhap  tuoi cua ban : ");
	scanf("%d", &year_of_birth);
	
	int age = 2023 - year_of_birth;
	//printf("Nam nay toi %d tuoi. Toi nang %.1f kg", age, weight);
	//printf("Hello Phat and Lam Anh!\n");
	
	for(int i = 1;i <= 10 ; i++ ) {
		printf("Toi nam nay %d tuoi.\n", age + i);// age + i moi nam tang len 1 tuoi
	}
}
