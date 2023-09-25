#include <stdio.h>

void hello() {
	printf("Xin chao toi yeu Hanoi\n");
}

int main () {
	
	//khai bao mang
	// type arr[size] = {elements}
	//lap mang
	/*
	for idx from 0 to size
		printf arr[idx]
	*/
		
	int x[3] = {1, 2, 3};
	 
	 for (int i = 0; i <= 2; i++) {
	 	printf("%d ", x[i]);
	 }
	 
	 hello();//in ra phan tu trong function
	
}


