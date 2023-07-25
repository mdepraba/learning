#include <iostream>
#include <string>
using namespace std;

int main  (){
	string kal_input;
	
	// getline(cin, varibel)
	cout << "masukkan kalimat:";
	getline(std::cin, kal_input);
	
	cout << "kalimat yang diinput: " << kal_input << endl;
	
	
	//jumlah kata dari input (dengan menghitung jumlah spasi)
	int posisi = 0;
	int jml = 0;
	while(true){
		posisi = kal_input.find(" ", posisi + 1);
		jml++;
		//	cout << "posisi: " << posisi << "jumlah: " << jml << endl;
		if (posisi < 0){
			break;
		}
	}
	cout << "jumlah kata = " << jml << endl;
	
	
	return 0;
}
