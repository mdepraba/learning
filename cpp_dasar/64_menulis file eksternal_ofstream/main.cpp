#include <iostream>
#include <fstream>	//ofstream, ifstream. fstream
using namespace std;

int main (){

	ofstream myFile;

/*	ios::out	= operasi output, default (tidak berubah)
	ios::app	= menuliskan pada akhir baris
	ios::trunc	= membuat file jika tidak ada, jika ada maka akan dihapus, default
*/
	myFile.open("data3.txt", ios::app);		//append, menambah
	myFile << "baris baru pada data 3";
	myFile.close();

	myFile.open("data1.txt", ios::out);		//overwrite (menumpuk yg sudah ada)
	myFile << "tuliskan pada data 1";
	myFile.close();

	int a = 80085;
	myFile.open("data2.txt", ios::trunc);	//overwrite (menumpuk yg sudah ada)
	myFile << "tuliskan pada data 2";
	myFile << "\n" << a;
	myFile.close();

	return 0;
}
