#include <stdio.h>
#include <math.h>

//int prime (int n){
//	int cnt  = 0;
//	int i;
//	for(i=1; i <=n; i++){
//		if(n%i == 0) ++cnt;
//	}
//	if(cnt == 2){
//		return 1;
//	}else{
//		return 0;
//	}
//}

//neu sang so nguyen to ko vuot qua n phai tao duoc mang có kích thuoc n+1 phan tu


int prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}else return n>1;
	}
}

int main (){
	int n;
	scanf("%d", &n);
	if(prime(n)) printf("YES");
	else printf("NO");
}
