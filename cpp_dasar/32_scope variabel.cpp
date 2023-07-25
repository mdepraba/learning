#include <iostream>
using namespace std;

//global scope

int x = 10; //variabel global

int ambil_global(){
	return x; //mengambil variabel global
}

int x_local(){
	int x = 5; //variabel local x_local
	return x;
}

int main(){	
	cout << "1. variable global : " << x << endl;
	int x = 8; // variabel local untuk main
	cout << "2. variable local main : " << x << endl;
	cout << "3. variable ambil_global : " << ambil_global() << endl;
	cout << "4. variable local main : " << x << endl;
	cout << "5. variable x_local : " << x_local() << endl;
	
	
	{
		//block scope
		int x = 2; //nilai dalam block tidak akan merubah nilai diluar
		cout << "8. variabel local main : " << x << endl;
		cout << "8. variabel global : " << :: x << endl; //unary, ngambil nilai x paling luar
	}
	cout << "9. variabel local main : " << x << endl;
	
	
	
	cin.get();
	return 0;
}
