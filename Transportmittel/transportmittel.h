#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transportmittel
{
private:
  double hoehe=3;
  double breite=2;
public:
  Transportmittel(){}
  Transportmittel(double breite, double hoehe)
  {}
  void bewegen (string richtung){
    std::cout << "In Richtung "<<richtung<<" bewegen" << '\n';
  }
  double gethoehe() {return hoehe;}
  double getbreite() {return breite;}
};
class Wasserfahrzeug : public Fahrzeug{

};
