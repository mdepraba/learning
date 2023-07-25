#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void prbinary(unsigned short x, string nama);

int main (){
// ternaary operator '?'  
	// kondisi ? hasil1(TRUE) : hasil2(FALSE)
	int a = 10;
	int b = 15;
	
	string hasil1, hasil2;
	hasil1 = "benar";
	hasil2 = "salah";
	
	string titiq = (a > b) ? hasil1 : hasil2;
	cout << titiq << "\n\n";
	
// commma operator
	// (expression1, expression2)
	int c,d,e;
	
  	c = (d=3, cout << d << " ", e=2, cout << e << " ", (d+e)); //nilai (d+e) masuk ke c
	cout << c << "\n\n";
	
// bitwise operator
	unsigned short f,g,h;
	f = 5;
	g = 10;
	prbinary(f, "f");
	prbinary(g, "g");
	
	h = f & g;
	cout << "bitwise AND\n";
	prbinary(h, "h");
	
	h = f | g;
	cout << "bitwise OR\n";
	prbinary(h, "h");
	
	h = f ^ g;
	cout << "bitwise XOR\n";
	prbinary(h, "h");
	
	h = ~ g;
	cout << "bitwise NOT\n";
	prbinary(h, "h");
	
	h = g << 1;
	cout << "bitwise SHL\n";
	prbinary(h, "h");
	
	h = g >> 2;
	cout << "bitwise SHR\n";
	prbinary(h, "h");				// angka 1 dipindah ke address selanjutnya
	cout << endl;
	
// casting operator
	// memaksa satu tipe data diconvert menjadi tipe data yang lain
	int i = 5;
	float j = 6.67f;
	char k = 'k';
	
	cout << i * (int)j << endl;	
	cout << "k menjadi " << (int)k << endl;
	cout <<  k + i << endl;
	cout << (char)(k + i);
	
	
	return 0;
}

void prbinary(unsigned short x, string nama){
	cout << nama << " = " << bitset<8>(x) << endl;
}
/*	bitwise operator
	&	AND Bitwise AND
	|	OR 	Bitwise inclusive OR
	^	XOR	Bitwise exclusive OR
	~	NOT
	<<	SHL Shift bits left			= menggeser ke kiri
	>>	SHR Shift bits right		= menggeser ke kanan
*/
