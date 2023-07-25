#include <iostream>

using namespace std;

template <typename T>
void print(T data){
	cout << data << endl;
}

// mengubah berbagai tipe data menjadi int
template <typename T>
int toInt(T data){
	return int(data);
}

template<typename T, typename U>
T max(T a, U  b){
	return (a > b) ? a : b;
}


=p91ooooooooo

int main (){

	print(5);
	print(5.7);
	print('c');
	max(3, 5);

	print<int>(3.4);

	return 0;

}
