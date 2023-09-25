#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX_SIZE 100 // suc chua toi da

void NhapMang(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

/*
    Kiem tra so nguyen to
*/
bool isPrime(int n)
{
	int i;
    if (n < 2)
        return false;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

/*
    Dem so luong so nguyen to
*/
int PrimeCount(int a[], int n)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

/*
    Liet ke cac so nguyen to
*/

void PrintPrime(int a[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
}

int main()
{
    int arr[MAX_SIZE];

    int n; // so luong phan tu cua mang
    // Kiem tra so luong phan tu là so duong + nho hon MAX_SIZE
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);

    // Nhap mang
    NhapMang(arr, n);

    // Xuat mang
    XuatMang(arr, n);

    // Giai bài toán
    int primeCount = PrimeCount(arr, n);
    printf("\nSo luong so nguyen to la %d", primeCount);
    if(primeCount > 0){
        printf("\nDanh sach so nguyen to: ");
        PrintPrime(arr, n);
    }
}
