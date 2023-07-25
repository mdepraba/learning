#include <iostream>
using namespace std;

void print_array (int *ptrArr, int baris, int kolom){
	int index = 0;
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < kolom; j++){
			cout << *(ptrArr + index) << "\t";
			index += 1;
		}
		cout << endl;
	}
}

int main (){
	
	//array multidimensi
		/*array[baris][kolom]*/
	int baris = 2;
	int kolom = 2;
	int arrayN[2][2] = {1,2,3,4};
	
	print_array(*arrayN, 2, 2);
	  
//	for (int i = 0; i < 2; i++){
//		for (int j = 0; j < 2; j++){
//			cout << arrayN[i][j];
//		}
//		cout << endl;
//	}
	
	return 0;
}
