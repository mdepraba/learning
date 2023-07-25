#include <iostream>
using namespace std;

int main(){

	int input, i, j, banyak, prima;
	cin >> input;
	for (i = 1; i <= input; i++){
		banyak = 0;
		for (j = 1; j <= i; j++){
			if (i % j == 0){
				banyak ++;
			}
		}
		if(banyak == 2){
			cout <<  i << " ";
		
		}
		//cout << prima << " ";
	}




	cin.get();
	return 0;
}