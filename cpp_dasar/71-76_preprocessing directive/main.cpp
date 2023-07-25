// preprocessing directive
#include <iostream>

	//makro merubah nilai dengan nama
#define PI 3.14159265359// tidak menggunakan memori (tidak memiliki address), konstan
#define Bahasa "indonesia"

	//makro untuk fungsi
#define KUADRAT(X) (X*X)
#define Max(A,B) ((A > B) ? A:B)

// akhir preprocessing directive



using namespace std;

int main(){
	
	cout << "nilai PI: " << PI << endl;
	cout << "bahasa: " << Bahasa << endl;


	cout << "kuadrat: " << KUADRAT(23) << endl;
	cout << "max: " << Max(40,5);

	return 0;
	cin.get();
}