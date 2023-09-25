#include <stdio.h>

float trungbinhcong(int x[], int n){
	int tong = 0;
	int i;
	for(i=0; i<n; i++){
		tong+=x[i];
	}
	return (float)tong/n;
}

float trungbinhcongsoduong(int x[], int n){
	int tong = 0;
	int soluongsoduong = 0; 
	int i;
	for(i=0; i<n; i++){
		if(x[i]>=0){
			tong+=x[i];
			soluongsoduong++;
		}
	}
	return soluongsoduong>0?(float)tong/soluongsoduong:-1;
}

int main (){
	int a[100];
	int n, i;
	do{
		printf("Nhap vao so luong phan tu (0<n<100) : ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(i=0; i<n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nTrung binh cong: %.2f", trungbinhcong(a, n));
	float tbcsd = trungbinhcongsoduong(a, n);
	if(tbcsd>0){
		printf("\nTrung binh cong so duong: %.2f", tbcsd);		
	}else {
		printf("\nMang ko co so duong!");
	}
}

