#include <iostream>
using namespace std;

//fungsi prototipe
double volum_cube(double p, double l, double t = 1); //default argument

int main(){
	cout << "volume kubus : " << volum_cube(3,4,5) << endl; 
	cout << "volume kubus : " << volum_cube(3,4) << endl; 
	return 0;
}

double volum_cube(double p, double l, double t){ 
	return p * l * t;
}
