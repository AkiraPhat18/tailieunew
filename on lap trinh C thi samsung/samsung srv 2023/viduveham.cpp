#include <stdio.h>

int kiem_tra_SNT(int x){
	int i;
	if(x<1) 
		return 0;
	
	for(i=2; i<x-1; i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main(){
	//nhap lieu
	int n;
	printf("\n Nhap vao n=");
	scanf("%d", &n);
	
	//goi ham
	int kt = kiem_tra_SNT(n);
	
	//xu ly va xuat ket qua
	if(kt == 0){
		printf("\n Khong phai la so nguyen to");
	}else {
		printf("\n La so nguyen to");
	}
}
