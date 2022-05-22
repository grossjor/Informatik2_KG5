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
  //double* sethoehe {&hoehe};
  Transportmittel () {}
  Transportmittel (double hoehe, double breite)
  {
    hoehe=4;
    breite=5;
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
    double km;

  LandTransportmittel(){
    }
  LandTransportmittel(int radzahl,double hoehe,double breite)
    {
      radzahl = 4;
      breite = 2;
      hoehe = 1;
    }
  void fahren(double km){
    }
  void schieben(double km){
    }
      double getkm() {return km;}
};
class WasserTransportmittel : public Transportmittel{
  private:
    double bruttoregistertonnen;
  public :
    WasserTransportmittel() {
      }
    WasserTransportmittel(double hoehe,double breite, double bruttoregistertonen) {
      }
};
class Fahrrad : public LandTransportmittel{
  private:
    int anzahlgaenge;
  public:
    void freihaendigfahren (string name){
      }
    int getgaenge() {return anzahlgaenge;}
    void schieben(double km){
      }
    Fahrrad(){
      }
    Fahrrad(double hoehe, double breite, int radzahl, int anzahlgaenge){
      }
};
