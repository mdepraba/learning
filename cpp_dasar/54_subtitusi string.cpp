#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat1("aku suka kamu suka, siapa? dia");
	string kalimat2("wakanda forever!!!");
	
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	
	// swap string
	cout << "\nswap string \n";
	kalimat1.swap(kalimat2);
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	
	// replace, mengganti substring
	kalimat2.replace(27, 3, "anjing!");
	kalimat1.replace( kalimat1.find("er"), 2, "ahhh");
	
	cout << "\nreplace string \n";
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	
	// insert string
	kalimat1.insert(8,"dan hatiku ");
	cout << "\ninsert string \n";
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	
return 0;
}
