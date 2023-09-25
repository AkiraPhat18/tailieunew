#include <stdio.h>
#include <math.h>

int kiem_tra_sochinhphuong(int x){
	int kc = (float)sqrt(x);
	if(pow(kc, 2) == x){
		return 1;
	}else {
		return 0;
	}
}

int main(){
	//nhap lieu
	int n, i;
	do{
		printf("\n Nhap vao n=");
		scanf("%d", &n);
	}while(n<1);

	
	//goi ham
	for(i=2; i<=n; i++){
		if(kiem_tra_sochinhphuong(i)){
			printf("%d ", i);
		}
	}
	
}
