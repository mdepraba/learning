#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArr (std::array <int, arraySize> &angka){
	std::cout << "array: ";
	for (int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArr (std::array <char, arraySize> &angka){
	std::cout << "array: ";
	for (char &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main () {
	//sorting	
//	{
//	std::array <int, arraySize> angka = {4,3,5,2,1,6,8,7,9,0};	
//	std::array <char, arraySize> huruf = {'c','h','j','y','l','k', 'u','t'};
//	
//	printArr(angka);
//	printArr(huruf);
//	
//	std::cout << std::endl;
//	
//	std::sort(angka.begin(), angka.end());
//	printArr(angka);
//	
//	std::sort(huruf.begin(), huruf.end());
//	printArr(huruf);
//	}

	//searching
	{
	std::array <int, arraySize> angka = {4,3,5,2,1,6,8,7,9,0};
	int angkaCari;
	bool ketemu; //perlu deklarasi ini untuk t/f data
		/*sorting dulu, lalu search -> binary_search*/
		
	std::cout << "masukkan angka yg ingin dicari ";
	std::cin >> angkaCari;
	system("cls");
	
	std::sort(angka.begin(), angka.end());
					//(address awal, address akhir, data dicari)
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);
	
	printArr(angka);
	if (ketemu){
		std::cout << "ada\n";
	}else {
		std::cout << "tidak ada\n";
	}
	}
	
	return 0;
}
