// V02: Standard- und allgemeiner konstruktor
#include "Auto.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Auto 0:\n";
	Auto a;
	a.fahren(188);
	a.tanken(10);
	a.fahren(5);
	a.tanken(70);
	cout << "\n";

	cout << "Auto 1:\n";
	//(Tankgröße, Tankinhalt, Spritverbrauch)
	Auto a1(40, 40, 0.08);
	a1.fahren(188);
	a1.tanken(10);
	a1.fahren(5);
	a1.tanken(70);
	
}