#include <iostream>
#include <string>
using namespace std;

int main (){
	
	//array char tidak bisa ditambah, fix karena array
	string data;
	cout << "masukkan kata ";
	cin >> data;
	cout << "kata tersebut adalah " << data << endl;
	// saat input string, spasi dan kata" setelah spasi tidak dibaca
	
//operasi string
	//merubah karakter pada indeks
	string kata("montor");
	kata[0] = 'k';
	kata[5] = 'l';
	cout << kata << endl;
	
	//menyambung, concatination
	string kata2(kata + "mbr");
	cout << kata2 << endl;
	
	string kata3(" membahana");
	kata2.append(kata3);
	cout << kata2 << endl;
	
	string kata4(" jeder");
	kata2 += kata4;
	cout << kata2 << endl;
		
	return 0;
}
