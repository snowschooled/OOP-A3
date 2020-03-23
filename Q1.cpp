//CSCI1730-Group5-assignment 3 problem 1
//Joel Piontek, Andrew Amakye Ansah, Adem Boru
//test
//test
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


class complex {
public:
complex(){
	a = 0;
	b = 0;

}
double input(){
	cout << "Enter a complex number a+bi: ";
	cin >> a >> b >> i;
	cout << endl;
}
double addition(){
}
double subtracttion(){
}
double multiplication(){
}
double division(){
}
double output(){
}
double convert(){
}
bool checkEqual(){
}
private:
double a, b;
char i;
};


int main(){


	cout << "Select an option - (1) perform complex number arithmetic" <<endl;
	cout << "                   (2) check for quadratic equation solution" << endl;
	cout << "                   (3) exit" << endl;


	complex userComplex1;
	complex userComplex2;
	userComplex1.input();
	userComplex2.input();
	return 0;
}
