#include <iostream>
using namespace std;

int main(void) {

	float Float;
	float Float1;
	double Double;
	long double LDouble;
	long double LDouble1;
	int Int;
	int IntSum;

	Int = 314;
	Float = 0.0314f;
	Float1 = 0.0314;
	Double = 3.14;
	LDouble = 314.0;
	LDouble1 = 314.000;
	IntSum = Int + Double;

	cout << "Int = " << Int << endl;
	cout << "Float with f = " << Float << endl;
	cout << "Float without f = " << Float1 << endl;
	cout << "Double = " << Double << endl;
	cout << "Long Double with .0 = " << LDouble<< endl;
	cout << "Long Double with .000 = " << LDouble1 << endl;

	cout << "Int + Double = " << IntSum << endl;

	bool Bool1 = true;
	bool Bool2 = false;

	cout << "This is true = " << Bool1 << endl;
	cout << "This is false = " << Bool2 << endl;
 
	return 0;
}