#include <iostream>

using namespace std;

int main(){
	
	//array<int, jumlah array> nama_array
	
	int nilai[5];
	
	for (int i = 0; i <= 4; i++){
		nilai[i] = i;
		cout << "nilai ["<<i<<"] = " << nilai[i];
		cout << " address : " << &nilai[i] << endl << endl;
	}
	cout << "ukuran : " << nilai.size() << endl;
	cout << "address awal : " << nilai.begin() << endl;
	cout << "address akhir : " << nilai.end() << endl;
	cout << "nilai ke-2 : " << nilai.at(2) << endl;
		 
	return 0;
}

