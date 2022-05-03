// V01_commit test 3
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Auto {
private:
	int radzahl = 4;
	string farbe = "rot";
	int ps = 270;
	int anzahl_sitze = 2;
	float spritverbrauch = 0.16; //pro Km
	float tankinhalt = 30;
	int tankgroesse = 60;

public:
	void fahren(float strecke) {
		//float strecke;
		//cout << "Strecke angeben: ";
		//cin >> strecke;


		if (strecke * spritverbrauch >= tankinhalt) {
			strecke = tankinhalt / spritverbrauch;
			cout << "Tank leer, bitte tanken.\n";
		}
		cout << "gefahrene Strecke: " << strecke << " km.\n";
		tankinhalt = tankinhalt - strecke * spritverbrauch;
		cout << "aktuelle Tankfuellung: " << tankinhalt << " Liter.\n";
	}

public:
	void tanken(int tankmenge) {
		//cout << "Tankmenge in L angeben: ";
		//cin >> tankmenge;
		if (tankmenge > tankgroesse - tankinhalt) {
			cout << "zu hohe Tankmenge, bitte maximal " << tankgroesse - tankinhalt << " eingeben\n";
			//cin >> tankmenge;
		}
		else {
			tankinhalt = tankinhalt + tankmenge;
			cout << tankmenge << " Liter getankt.\n";
			cout << "aktuelle Tankfuellung: " << tankinhalt << " Liter.\n";
		}
	}

};