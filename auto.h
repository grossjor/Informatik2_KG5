#include <iostream>
#include <string>
using namespace std;

class Auto {
	//private:
public:
	int radzahl = 4;
	string farbe = "rot";
	int ps = 270;
	int anzahl_sitze = 2;
	double spritverbrauch = 0.16; //pro Km
	double tankinhalt = 30;
	int tankgroesse = 60;

	void fahren(float strecke) {
		//float strecke;
		//cout << "Strecke angeben: ";
		//cin >> strecke;


		if (strecke*spritverbrauch >= tankinhalt) {
			strecke = tankinhalt / spritverbrauch;
			cout << "Tank leer, bitte tanken.\n";
		}
		cout << "gefahrene Strecke: " << strecke << " km.\n";
		tankinhalt = tankinhalt - strecke * spritverbrauch;
		cout << "aktuelle Tankfuellung: " << tankinhalt << " Liter.\n";
	}

public:
	int tankmenge;
	void tanken(int tankmenge) {
		//cout << "Tankmenge in L angeben: ";
		//cin >> tankmenge;
		if (tankmenge > tankgroesse - tankinhalt) {
			cout << "zu hohe Tankmenge, bitte maximal " << tankgroesse - tankinhalt << " eingeben";
			cin >> tankmenge;
		}
		tankinhalt = tankinhalt + tankmenge;
		cout << "aktuelle Tankfuellung: " << tankinhalt << " Liter.\n";
	}

};
