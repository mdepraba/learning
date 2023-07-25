#include <iostream>

using namespace std;


int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}
//worker (tidak ada pengembalian)
void show(int input){
	cout << "menampilkan dengan void\n";
	cout << input << endl;
	
}
int main() {
	int input, hasil;
	cout << "masukkan nilai kuadrat dari : ";
	cin >> input;
	show(input);
	
	hasil = kuadrat(input);
	cout << "hasil = " << hasil << endl; 
	
	
	return 0;
}
