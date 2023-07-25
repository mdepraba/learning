#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat1("jokowi 3 periode owi");
	string kalimat2("nasi goreng itu sebenarnya ditumis");
	
	cout << "1: " << kalimat1 << endl;
	cout << "2: " <<kalimat2 << endl;
	
// substring, mengakses string di tengah-tengah
	// substr(index, panjang)
	cout << kalimat1.substr(0,6) << endl;
	cout << kalimat2.substr(5,10) << endl; //spasi included
	
// mencari posisi dari substring
	cout << "posisi = " << kalimat1.find("periode") << endl;
	cout << "posisi = " << kalimat2.find("sebenarnya ditumis") << endl;
	
	int a = kalimat1.find("owi");
	cout << a << endl;
	cout << kalimat1.find("owi", a + 1) << endl;
	return 0;
}
