#include <iostream>
#include <cmath>
using namespace std;

void selectionSort(int a[], int n){
	for(int  i = 0; i < n; i++){
		//Dung i bien de luu chi so cua phan tu nho nhat
		int min_pos = i;
		//Duyet tat ca cac phan tu dung sau phan tu hien tai va cap nhat chi so cua phan tu nho nhat
		for(int j = i+1; j < n; j++)
		{
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}

int main () {
	int a[1000], n ;
	cin >> n;
	for (int i =0; i < n; i++) {
		cin >> a[i];
	}
	
	selectionSort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
