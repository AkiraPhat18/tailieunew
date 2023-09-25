#include<iostream>

using namespace std;
	//The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.
int main (){
	//freopen("input.txt", "r", stdin);
	
	int T;//tong so test case 
	cin >> T;
	for(int tc =1;tc <= T ; tc++){
		int n , x , y;
		cin >> n >> x >> y;
		for(int i=1; i < n; i++){
			if( i % x == 0 & i % y != 0){
				cout <<  i << " ";
<<<<<<< HEAD
			}	
=======
			}
>>>>>>> 82639f9d0f508ada5effcc09db07304654f6786f
		}
	}
	cout << endl;
	return 0;
}
