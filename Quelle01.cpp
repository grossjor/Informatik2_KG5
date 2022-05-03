// V01: test von Auto.h & Funktionen
#include "Auto.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Auto a;
	a.fahren(188);
	a.tanken(10);
	a.fahren(5);
	a.tanken(70);
}