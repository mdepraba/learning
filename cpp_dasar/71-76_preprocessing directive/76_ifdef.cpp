#include <iostream>
#include "foo.h"
#include "bar.h"

/*
//ifdef , jika FOO ada
#ifdef FOO
#define TEST_FOO "foo ada"
#else 
#define TEST_FOO "foo tidak ada"
#endif

//ifndef , jika foo tidak ada
#ifndef FOO
#define FOO "foo baru"
#endif
*/


using namespace std;

int main (){

	cout << FOO << endl;

	cin.get();
	return 0;
}