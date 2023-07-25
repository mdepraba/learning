#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

int main(){
    fstream myFile;
    myFile.open("data.bin", ios::out | ios::binary);

    
    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "CaoCao";
    mahasiswa1.jurusan = "cavalry";

    mahasiswa2.NIM = 234;
    mahasiswa2.nama = "SunTzu";
    mahasiswa2.jurusan = "invantry";

    mahasiswa3.NIM = 345;
    mahasiswa3.nama = "Imhotep";
    mahasiswa3.jurusan = "archer";

    // Write the length of the strings to the binary file
    int namaLength = mahasiswa1.nama.length();
    myFile.write(reinterpret_cast<char*>(&namaLength), sizeof(int));
    myFile.write(mahasiswa1.nama.c_str(), namaLength);

    namaLength = mahasiswa2.nama.length();
    myFile.write(reinterpret_cast<char*>(&namaLength), sizeof(int));
    myFile.write(mahasiswa2.nama.c_str(), namaLength);

    namaLength = mahasiswa3.nama.length();
    myFile.write(reinterpret_cast<char*>(&namaLength), sizeof(int));
    myFile.write(mahasiswa3.nama.c_str(), namaLength);

    int jurusanLength = mahasiswa1.jurusan.length();
    myFile.write(reinterpret_cast<char*>(&jurusanLength), sizeof(int));
    myFile.write(mahasiswa1.jurusan.c_str(), jurusanLength);

    jurusanLength = mahasiswa2.jurusan.length();
    myFile.write(reinterpret_cast<char*>(&jurusanLength), sizeof(int));
    myFile.write(mahasiswa2.jurusan.c_str(), jurusanLength);

    jurusanLength = mahasiswa3.jurusan.length();
    myFile.write(reinterpret_cast<char*>(&jurusanLength), sizeof(int));
    myFile.write(mahasiswa3.jurusan.c_str(), jurusanLength);

    myFile.close();
    cin.get();
    return 0;
}
