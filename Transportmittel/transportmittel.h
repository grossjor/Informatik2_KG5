#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transportmittel
{
private:
  double hoehe=1;
  double breite=2;
public:
  //double* sethoehe {&hoehe};
  Transportmittel () {}
  Transportmittel (double hoehe, double breite)
  {
  }
  double gethoehe() {return hoehe;}
  double getbreite() {return breite;}

  void bewegen(std::string richtung)
  {
    std::cout << "In Richtung "<<richtung<<" bewegen" << '\n';
  }


};
class LandTransportmittel : public Transportmittel{
private:
  int radzahl=4;
public:
  double getkm() {return km};

  LandTransportmittel(){
    }
  LandTransportmittel(int radzahl,double hoehe,double breite) {
    }
  void fahren(double km){
    }
  void schieben(double km){
    }
};
class WasserTransportmittel : public Transportmittel{
  public :


};
