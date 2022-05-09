// V04: Getter aller privaten Attribute hinzugefügt
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
	cout << "\n";

	/*
	cout << "Auto 2:\n";
	Auto a2 = a1;
	a2.fahren(188);
	a2.tanken(10);
	a2.fahren(5);
	a2.tanken(70);
	cout << "\n";
	*/

	cout << "Radzahl: " << a.getRadzahl() << "\n";
	cout << "Farbe: " << a.getFarbe() << "\n";
	cout << "PS: " << a.getPs() << "\n";
	cout << "Anzah Sitze: " << a.getAnzahl_sitze() << "\n";
	cout << "Spritverbrauch: " << a.getSpritverbrauch() << "\n";
	cout << "Tankinhalt: " << a.getTankinhalt() << "\n";
	cout << "Tankinhalt Auto1: " << a1.getTankinhalt() << "\n";
	cout << "Tankgroesse: " << a.getTankgroesse() << "\n";
}