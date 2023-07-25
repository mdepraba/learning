#include <iostream>
using namespace std;

//prototype
int faktorial(int i);

int main(){
	int input;
	cout << "input faktorial dari : "; cin >> input;
	
	int hasil = faktorial(input);
	cout << " = " << hasil << endl;
	
	cin.get();
	return 0;
}

int faktorial(int i){
	if (i <= 1){
		cout << i;
		return i;
	} else {
		cout << i << "*";
		return i * faktorial(i-1);
	}
}
