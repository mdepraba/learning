#include <iostream>

using namespace std;

int main () {

	int n, fn, f1, f2;
	
	cout << "panjang pola ";
	cin >> n;
	
/*	cout << "segitiga siku-siku" << endl;
	cout << "pola 1\n" << endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 2\n" << endl;
	for (int i = 1; i <= n; i++){
		for (int j = n; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 3\n" << endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = n; k >= i; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 4\n" << endl;
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
		for (int k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}*/
	
	cout << "segitiga 2 " << endl;
	cout << "pola 5\n" << endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 6\n" << endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = n; k >= (2 * i - n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 7\n" << endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 2; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = n; k >= (2 * i - n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
