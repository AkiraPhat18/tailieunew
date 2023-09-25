#include <stdio.h>

//Nhap mang
void nhap(int a[], int n)
{
	printf("Nhap cac phan tu trong mang: \n");
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\a[%d]=", i);
		scanf("%d", &a[i]); 
	}	
}

// Xuat mang
void xuat(int a[], int n)
{
	int i;
	printf("Mang vua nhap la: \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
}

//Tinh tong
int sum(int a[], int n){
	int tong = 0;
	int i;
	for(i = 0; i < n; i++) 
		tong+= a[i];	 // tong= tong+a[i]
	return tong;
} 

//tim gia tri lon nhat trong mang
int max(int a[], int n)
{
    int max = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

//tim gia tri nho nhat trong mang
int min(int a[], int n)
{
    int min = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main () {
	int n, i, a[1000];
	scanf("%d",&n);
	nhap(a, n);
	xuat(a, n);

	printf("\nTong cac phan tu trong mang la : %d", sum(a, n));
	printf("\nGia tri lon nhat trong mang la: %d", max(a, n));
	printf("\nGia tri nho nhat trong mang la: %d", min(a, n));
	return 0;
}
