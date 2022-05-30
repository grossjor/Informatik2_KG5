#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

//test
int main() {
	try {
		Complex c1(12, 8);
		Complex c2(3, 3);
		Complex c3 = c1 / c2;
		cout << "c1: " << c1 << endl;
		cout << "c2: " << c2 << endl;
		cout << "c3: " << c3 << endl;
		Complex c0(0, 0);
		Complex c4 = c1 / c0;
		cout << "c4: " << c4 << endl;
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}

}