#include <iostream>
#include <array>
using namespace std;

int main (){

	/*
		for (deklarasi variabel : array) {
		statement 
 		}
	*/
	int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

	//looping array secaran konstan, nilai dalam array tidak bisa dirubah
	for (int nilai :  arrayNilai){	
		cout << nilai << endl;
		nilai = 1; //tidak berpengaruh
	} 
	cout << endl;

	//looping dengan mengambil address dari array
	for (int &nilairef : arrayNilai){
		cout << "address " << &nilairef << "/t nilai : " << nilairef << endl;
	}
	cout << endl;
	
	for (int &nilairef : arrayNilai){
		nilairef *= 2;
		cout << "address " << &nilairef << "/t nilai : " << nilairef << endl;
	}


	return 0;
}
