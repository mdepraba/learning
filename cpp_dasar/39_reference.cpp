#include <iostream>

using namespace std;
//reference

int main(){
	
	int a =5;
	
	cout << "address dari a " << &a << endl;
	cout << "	nilai dari a " << a << endl;
	
	//reference
	int &b = a;
	
	cout << "address dari b " << &b << endl;
	cout << "	nilai dari b " << b << endl << endl;
	
	b = 10; // nilai a juga berubah saat b dirubah, dan sebaliknya
	cout << "	nilai dari a " << a << endl << endl;
	
	a = 20; 
	cout << "	nilai dari b " << b << endl;
	
	return 0;
}

