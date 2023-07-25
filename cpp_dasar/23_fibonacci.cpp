#include <iostream>

using namespace std;

//deret fibonacci
int main () {
	int nilai, fibo, f1, f2;
	cout << "masukkan nilai ";
	cin >> nilai;
	
	f1 = 1;
	f2 = 0;
	for (int a = 1; a < nilai; a++){
		fibo = f1 + f2;
		f2 = f1;
		f1 = fibo;
		
		
	}
	cout << "nilai fibonacci = " << fibo;
	return 0;
}
