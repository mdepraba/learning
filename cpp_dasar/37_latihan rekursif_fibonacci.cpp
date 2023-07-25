#include <iostream> 
using namespace std; 
int fibo(int i);

int main (){ 
	int input, hasil;
	cout << "masukkan "; cin >> input;
	hasil = fibo(input);
	
	cout << "hasil = " << hasil;
return 0;
}

int fibo(int i){
	if ((i == 0) || (i == 1)){
		return i;
	} else{
		return fibo(i-1) + fibo (i-2);
	}
	 
}
