#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	char lempar;
	while (true){
		cout << "lempar dadu ? (y/n)";
		cin >> lempar;
		if (lempar == 'y'){
			cout << 1 + (rand()%6) << endl;
		
		} else if (lempar == 'n'){
			break;
		} else{
			cout << "masukkan y atau n doank blok";
 
		}
	}
	
	return 0;
}
