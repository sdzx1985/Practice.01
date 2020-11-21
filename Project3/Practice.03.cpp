#include <iostream>
using namespace std;

int main(void) {

	int num1 = 0;
	short num2 = 0;
	long num3 = 0;

	double num4 = 0;
	float num5 = 0;
	long double num6 = 0;

	char Char1 = 'A';

	bool Bool;

	cout << " Int type : " << sizeof(num1) << endl;
	cout << " Short type : " << sizeof(num2) << endl;
	cout << " Long type : " << sizeof(num3) << endl;
	cout << " Double type : " << sizeof(num4) << endl;
	cout << " Float type : " << sizeof(num5) << endl;
	cout << " Long double type : " << sizeof(num6) << endl;
	cout << " Char type : " << sizeof(Char1) << endl;
	cout << " Bool type : " << sizeof(Bool) << endl;

	return 0;

}