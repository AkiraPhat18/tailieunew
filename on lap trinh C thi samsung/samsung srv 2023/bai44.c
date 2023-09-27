#include <stdio.h>
#include <limits.h>
#include <math.h>

int a[100];
int n;

void nhapmang(int x[], int n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++){
		printf("Nhap x[%d] =", i);
		scanf("%d", &x[i]);
	}
}

void xuatmang(int x[], int n){
	int i;
	printf("Mang vua nhap vao la : ");
	for(i=0; i<n; i++){
		printf("%d", x[i]);
	}
}


void xoamangtaivitri(int x[],int n, int vi_tri){
    // 1 2 3 4 5
    // 1 2 4 5
//    if (vi_tri < 0 || vi_tri >= n) {
//        // Kiem tra neu vi tri không hop le, không làm gì ca
//        return;
//    }
    int i;
    for (i = vi_tri; i < n - 1; i++) {
        x[i] = x[i + 1];
    }
    n--;
}


void xoamangtheogiatri(int x[], int n){
	int gt;
	int i;
	printf("Nhap vao gia tri can xoa: ");
	scanf("%d", &n);
	for(i =0; i<n; i++){
		if(x[i]==gt){
			xoamangtaivitri(x, n, i);
		}
	}
}

int main(){
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\n");
	xoamangtheogiatri(a, n);
	printf("\n");
	xuatmang(a, n);
	
	return 0;
	//xoamangtaivitri(a, n);
}
