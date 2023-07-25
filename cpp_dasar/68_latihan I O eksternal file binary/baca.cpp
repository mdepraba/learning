#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

Mahasiswa ambilData(int &posisi, fstream &myFile){
	Mahasiswa bufferData;

	myFile.seekg((posisi-1)*sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData.NIM), sizeof(int));
	int namaLength;
	myFile.read(reinterpret_cast<char*>(&namaLength), sizeof(int));
	char* nama = new char[namaLength+1];
	myFile.read(nama, namaLength);
	nama[namaLength] = '\0';
	bufferData.nama = nama;
	myFile.read(reinterpret_cast<char*>(&bufferData.jurusan), sizeof(string));

	delete[] nama;

	return bufferData;
}

int main(){
	fstream myFile;
	Mahasiswa dataBaca;
	myFile.open("data.bin", ios::in | ios::binary);
	int posisi = 2;
	dataBaca = ambilData(posisi,myFile);

	cout << dataBaca.NIM << endl;
	cout << dataBaca.nama << endl;
	cout << dataBaca.jurusan << endl;

	myFile.close();

	cin.get();
	return 0;
}
