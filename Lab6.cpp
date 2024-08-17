#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// setting up a structure to hold fractions
struct frac {
	int numerator;
	int denominator;
};
// making function to print logo
void PrintLogo() {
	cout << "+-------------------------------------------+" << endl;
	cout << "|              FRACTION FUN                 |" << endl;
	cout << "|             by Gavin Crain                |" << endl;
	cout << "+-------------------------------------------+" << endl;
}
// making function to ask for user fraction 
void AskFraction(frac &b) {

		cout << "Enter numerator:   ";
		cin >> b.numerator;
		int a = 1;
		while (a == 1) {
			cout << "Enter denominator: ";
			cin >> b.denominator;
			if (b.denominator == 0) {
				a = 1;
			}
			else {
				a = 0;
			}
		}
}
// solving for decimal value of user input 
double DecimalValue(frac a) {
	double decimal = a.numerator / float(a.denominator);
	return decimal;
}
// function that prints fraction structure in fraction style
void PrintFraction(frac a) {
	cout << a.numerator << "/" << a.denominator;
}

// adds together two seperate fraction structures 
frac Add(frac a, frac b) {
	frac c;
	if (a.denominator == b.denominator) {
		c.numerator = a.numerator + b.numerator;
		c.denominator = a.denominator;
	}
	else {
		c.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
		c.denominator = (b.denominator * a.denominator);
	}
	return c;
}
int main() {
	frac f, s;
	//testing functions 
	PrintLogo();
	AskFraction(f);
	AskFraction(s);
	// setting a variable to the output so printing is possible 
	double decimal = DecimalValue(f);
	// printing everything, seperating so that it can be done with the function PrintFraction
	cout << "Decimal Value of ";
	PrintFraction(f);
	cout << " = " << decimal << endl;
	// setting a frac structure to the Add output to store the info 
	frac z = Add(f, s);
	// printing the two fractions added previously and the output we got 
	PrintFraction(f);
	cout << " + ";
	PrintFraction(s);
	cout << " = ";
	PrintFraction(z);
	cout << endl;

	system("pause");
	return 0;
}