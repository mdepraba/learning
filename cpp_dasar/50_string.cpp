#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kata("mobil");
	cout << kata << endl;
	
	string data;
	cout << "masukkan kata: "; //tidak bisa mengidentifikasi spasi, berarti hanya untuk 1 kata.
	cin data;
	cout << "\n data yang dimasukkan adalah: " << data << endl;
	return 0;
}
