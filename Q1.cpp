//CSCI1730-Group5-assignment 3 problem 1
//Joel Piontek, Andrew Amakye Ansah, Adem Boru
//test
//test
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class complex {
public:
complex();
void input();
double geta();
double getb();
void addition(double a2, double b2);
void subtraction(double a2, double b2);
void multiplication(double a2, double b2);
void division(double a2, double b2);
void output();
void convert(double e,double f,double g);
bool checkEqual();
private:
double a, b, convertedA, convertedB;
char i;
};


int main(){
	//double sum;
	int choice = 0;
	char operation;
	char i;
	double a2, b2;
	double e,f,g;
	do {
		cout << "Select an option - (1) perform complex number arithmetic" <<endl;
		cout << "                   (2) check for quadratic equation solution" << endl;
		cout << "                   (3) exit" << endl;

		cin >> choice;


		complex userComplex1;
		complex userComplex2;
		if (choice == 1) {
			userComplex1.input();
			cout << "Enter an operation (+,-,*,/): ";
			cin >> operation;
			if(operation == '+') {

				userComplex2.input();

				a2 = userComplex2.geta();
				b2 = userComplex2.getb();
				userComplex1.output();
				cout << " + ";
				userComplex2.output();
				cout << " = ";
				userComplex1.addition(a2, b2);
			}
			else if(operation == '-') {
				userComplex2.input();
				a2 = userComplex2.geta();
				b2 = userComplex2.getb();
				userComplex1.output();
				cout << " - ";
				userComplex2.output();
				cout << " = ";
				userComplex1.subtraction(a2,b2);
			}
			else if(operation == '*') {
				userComplex2.input();
				a2 = userComplex2.geta();
				b2 = userComplex2.getb();
				userComplex1.output();
				cout << " * ";
				userComplex2.output();
				cout << " = ";
				userComplex1.multiplication(a2,b2);
			}
			else if(operation == '/') {
				userComplex2.input();
				a2 = userComplex2.geta();
				b2 = userComplex2.getb();
				userComplex1.output();
				cout << " / ";
				userComplex2.output();
				cout << " = ";
				userComplex1.division(a2,b2);
			}
			else{
				exit (1);
			}
			userComplex1.output();
			cout << endl << endl << endl;
			choice = 0;
		}
		else if (choice == 2) {
			cout << "Enter the coefficients of a quadratic equation: " << endl;
			cin >> e >> f >> g;
			userComplex1.convert(e,f,g);
			userComplex1.input();
			if(userComplex1.checkEqual()) {
				if (userComplex1.getb() > 0) {
					i = '+';
				}
				else {
					i = ' ';
				}
				cout << "The complex number: " << userComplex1.geta() << i << userComplex1.getb()<<"i" << " is a solution of the quadratic equation" << endl;
			}
			else{
				cout << "The complex number: " << userComplex1.geta() << i << userComplex1.getb() <<"i"<< " is not a solution of the quadratic equation" << endl;

			}
		}
		else {
			cout << "See you later!" << endl;
			exit (1);
		}
		choice = 0;
	}

	while(choice >=4 || choice <=0);
}

complex::complex(){
	a = 0;
	b = 0;
}
void complex::input(){
	cout << "Enter a complex number a+bi: ";
	cin >> a >> b >> i;
}
double complex::geta() {
	return a;
}
double complex::getb() {
	return b;
}
void complex::addition(double a2, double b2){
	a += a2;
	b += b2;
}

void complex::subtraction(double a2, double b2){
	a -= a2;
	b -= b2;
}
void complex::multiplication(double a2, double b2){
	double a1,b1;
	a1 = ((a*a2)-(b*b2));
	b1 = ((a *b2)+(b*a2));
	a = a1;
	b = b1;
}
void complex::division(double a2, double b2){
	double a1,b1;
	a1 = ((a*a2)+(b*b2))/((a2 * a2)+(b2 * b2));
	b1 = ((b*a2)-(a*b2))/((a2 * a2)+(b2 * b2));
	a = a1;
	b = b1;
}
void complex::output(){
	if (b < 0) {
		cout << a << b << i;
	}
	else {
		cout << a << "+" << b << i;
	}
}
void complex::convert(double e, double f, double g){

	double d;
	d=(f*f)-(4*e*g);
	if(d>=0) {
		convertedA=(-f+sqrt(d))/(2*e);
		convertedB = 0;
		cout << convertedA << endl;
	}
	else{
		d=d*(-1);

		convertedA = (-f/(2*e));
		convertedB =  (sqrt(d)/(2*e));
		cout << convertedA << "+" << convertedB << "i" << endl;
		cout << convertedA << "-" << convertedB << "i" << endl;
	}
}
bool complex::checkEqual(){
	if((convertedA == a && convertedB == b) || (convertedA == a && convertedB == -b)) {
		return (true);
	}
	else
		return (false);

}
