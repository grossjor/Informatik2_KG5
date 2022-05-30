#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

//test
int main() {

	Complex c1(12, 7);
	Complex c2(4, 2);
	Complex c3 = c1 - c2;
	cout << "c1: " << c1 << endl;
	cout << "c2: " << c2 << endl;
	cout << "c3: " << c3 << endl;
}