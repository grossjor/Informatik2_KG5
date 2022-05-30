#pragma once
#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
	double rpart, ipart;

public:
	//Allgemeiner Konstruktor
	Complex(double rpart, double ipart) :rpart(rpart), ipart(ipart) {};

	//getter
	double getrpart() { return rpart; }
	double getipart() { return ipart; }

	//setter
	void setipart(double pipart) { //pipart = public ipart
		cout << "ipart: ";
		cin >> pipart;
		ipart = pipart;
	}
	void setrpart(double prpart) { //prpart = public rpart
		cout << "rpart: ";
		cin >> prpart;
		rpart = prpart;
	}

	// https://www.youtube.com/watch?v=rWU5SoJT1rU 
	friend ostream& operator<<(ostream& stream,const Complex &complex) {
		stream << "z= " << complex.rpart << " + " << complex.ipart << "i";
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
	//Division
	Complex operator/(const Complex& complex) {
		Complex result(0, 0);
		if (complex.ipart == 0 || complex.rpart == 0) {
			throw invalid_argument("Div /0");
		}
		else {
			result.ipart = this->ipart / complex.ipart;
			result.rpart = this->rpart / complex.rpart;
			return result;
		}
	}

};