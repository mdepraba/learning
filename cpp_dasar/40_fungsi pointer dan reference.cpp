#include <iostream>
using namespace std;

void fungsi (int *b) {
	cout << "address b = " << b << endl;
	cout << "	nilai b " << *b << endl; //dereferencing
}

void kuadrat(int *valPtr){
	*valPtr = *valPtr * *valPtr;
	cout << *valPtr;
}

int main(){
	int a = 5;
	cout << "address a = " << &a << endl;
	cout << "	nilai a " << a << endl;
	
	fungsi(&a); //fungsi dengan input pointer
	kuadrat(&a);
	return 0;
}
