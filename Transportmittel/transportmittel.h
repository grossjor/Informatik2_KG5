#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transportmittel
{
private:
  double hoehe=3;
  double breite=2;
  std::string richtung="Nord";
public:
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
  void fahren(double km){

  }
  void schieben(double km){

  }

};
class WasserTransportmittel : public Transportmittel{
  public :


};
