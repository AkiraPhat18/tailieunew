#include <stdio.h>
#include <math.h>

// Neu ban muon sang cac so nguyen to khong vuot qua n
// Phai tao duoc 1 mang co kich thuoc là n+1 phan tu

int prime[1000001];

void sieve(){
	//coi tat ca cac so tu 0-n la so nguyen to
	// prime[i] = 1
	// prime[i] = 0
	
	int i;
	
	for (i=0; i<= 1000000;i++){
		prime[i] = 1;
	}
	//loai 0 va 1
	prime[0] = prime[1] = 0;
	for( i =2;i<=1000; i++){
		int j;
		// neu i la so nguyen to
		if(prime[i]){
			// Duyet tat ca cac boi so cua i va cho no khong la so nguyen to
			for(j=i*i; j>= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main (){
	sieve();
	int n, i;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		if(prime[i]){
			printf("%d", i);
		}
	}
}
