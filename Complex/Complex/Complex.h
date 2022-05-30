#pragma once
#include <iostream>
#include <string>
using namespace std;


class Complex {
private:
	int ipart, rpart;

public:
	//Allgemeiner Konstruktor
	Complex(int ipart, int rpart) :ipart(ipart), rpart(rpart) {};

	//getter
	int getipart() { return ipart; }
	int getrpart() { return rpart; }

	//setter
	void setipart(int pipart) { //pipart = public ipart
		cout << "ipart: ";
		cin >> pipart;
		ipart = pipart;
	}
	void setrpart(int prpart) { //prpart = public rpart
		cout << "rpart: ";
		cin >> prpart;
		rpart = prpart;
	}

	// https://www.youtube.com/watch?v=rWU5SoJT1rU
	friend ostream& operator<<(ostream& stream,const Complex &complex) {
		stream << "z= " << complex.ipart << " + " << complex.rpart << "i";
		return stream;
	}
	
	//Addition
	Complex operator+(const Complex& complex) {
		Complex result(0, 0);
		result.ipart = this->ipart + complex.ipart;
		result.rpart = this->rpart + complex.rpart;
		return result;
	}
	//Subtraktion
	Complex operator-(const Complex& complex) {
		Complex result(0, 0);
		result.ipart = this->ipart - complex.ipart;
		result.rpart = this->rpart - complex.rpart;
		return result;
	}


};