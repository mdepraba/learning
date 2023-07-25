#include <iostream>
#include <array>
using namespace std;

const int kolom = 3;
const int baris = 2;

void printArr(array <array <int, kolom>, baris> &nilaiArr){
	for (array <int, kolom> vectorBaris : nilaiArr){	//array <int, kolom> itu tipe data
		for(int nilaiKolom : vectorBaris){
			cout << nilaiKolom << " ";
		}
		cout << endl;
	}
}

int main(){
	
	array <array <int, kolom>, baris> nilaiMD = {1,2,3,4,5,6};
	
	printArr(nilaiMD);
	return 0;
}
