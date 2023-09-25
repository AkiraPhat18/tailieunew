#include  <iostream>//code c++

using namespace std;

#define N 100

int map[N][N];
int n , k , Ans;

int main(int argc, char** argv){
	int test_case , T;
	
	//freopen("input.txt", "r", stdin)
	 
	cin >> T;
	 
	for (test_case = 1; test_case <= T; ++test_case){
		cin >> n;
		cin >> k;
		
		cout << "#" << test_case << " " << Ans << endl;
	}
}
