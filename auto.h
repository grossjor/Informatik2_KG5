// V04
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
	//Standardkonstruktor
	Auto() {}

	//Allgemeiner Konstruktor
	Auto(int tankgroesse, float tankinhalt, float spritverbrauch);

	//Kopierkonstruktor
	Auto(const Auto & other) {
		tankgroesse = other.tankgroesse;
		tankinhalt = other.tankinhalt;
		spritverbrauch = other.spritverbrauch;
	}

	//Destruktor
	~Auto() {}

	//Getter:
	int getRadzahl() {return radzahl;}
	string getFarbe() {return farbe;}
	int getPs() {return ps;}
	int getAnzahl_sitze() {return anzahl_sitze;}
	float getSpritverbrauch() { return spritverbrauch; }
	float getTankinhalt() { return tankinhalt; }
	int getTankgroesse() { return tankgroesse; }


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

Auto::Auto(int tg, float ti, float sv) {
	tankgroesse = tg;
	tankinhalt = ti;
	spritverbrauch = sv;
}