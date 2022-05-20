#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transportmittel
{
private:
  double hoehe;
  double breite;
public:
  Transportmittel( double hoehe, double breite)
  {}
  void bewegen (string richtung){
    std::cout << "In Richtung "<<richtung<<" bewegen" << '\n';
  }
  double gethoehe() {return hoehe;}
  double getbreite() {return breite;}
};
