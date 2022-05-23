#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transportmittel
{
private:
  double hoehe=0;
  double breite=0;
public:
  Transportmittel () {}
  Transportmittel (double hoehe, double breite)
  {
    hoehe=3;
    breite=5;
    std::cout << "Transportmittel hoehe: "<< hoehe << '\n';
    std::cout << "Transportmittel breite: "<< breite << '\n';
  }
  double gethoehe() {return hoehe;}
  double getbreite() {return breite;}

  void bewegen(std::string richtung)
  {
    std::cout << "In Richtung "<<richtung<<" bewegen" << '\n';
  }

~Transportmittel(){ //std::cout << "destroyed" << '\n';
}
};


class LandTransportmittel : public Transportmittel{
  private:
    int radzahl=0;
  public:
int getradzahl() {return radzahl;}

  LandTransportmittel(){
    }
  LandTransportmittel(int radzahl,double hoehe,double breite)
    {
      radzahl = 4;
      breite = 2;
      hoehe = 1;
      std::cout << "LandTransportmittel radzahl: "<< radzahl << '\n';
      std::cout << "LandTransportmittel breite: " << breite <<'\n';
      std::cout << "LandTransportmittel hoehe: "<<hoehe << '\n';
    }
  void fahren(double km){
    std::cout <<km<< " km schieben" << '\n';
    }
  void schieben(double km){
    std::cout <<km<< " km fahren" << '\n';
    }

~LandTransportmittel(){}
};


class WasserTransportmittel : public Transportmittel{
  private:
    double bruttoregistertonnen=0;
  public :
  double getbruttoregistertonnen() {return bruttoregistertonnen;}
    WasserTransportmittel() {
      }

    WasserTransportmittel(double hoehe,double breite, double bruttoregistertonnen) {
      hoehe = 25;
      breite=16;
      bruttoregistertonnen=28970;
      std::cout << "WasserTransportmittel bruttoregistertonnen: "<<bruttoregistertonnen << '\n';
      std::cout << "WasserTransportmittel hoehe: "<< hoehe << '\n';
      std::cout << "WasserTransportmittel breite: "<< breite << '\n';
      }
      void anlegen(std::string anlegehafen ){
        std::cout << "Anlegen im Hafen: "<<anlegehafen << '\n';
      }
      void ablegen(std::string ablegehafen ){
        std::cout << "Ablegen im Hafen: "<<ablegehafen << '\n';
      }

~WasserTransportmittel(){}
};


class Fahrrad : public LandTransportmittel{
  private:
    int anzahlgaenge;
  public:
    void freihaendigfahren (string name){
      std::cout <<name<< " faehrt freihaendig" << '\n';
      }
    int getgaenge() {return anzahlgaenge;}
    void schieben(double km){
      std::cout << "man schiebt das rad fuer "<<km<<" km" << '\n';
      }
    Fahrrad(){
      }
    Fahrrad(double hoehe, double breite, int radzahl, int anzahlgaenge){
      hoehe=2.5;
      breite=1;
      radzahl=2;
      anzahlgaenge=27;
      std::cout << "Fahrrad hoehe: "<<hoehe << '\n';
      std::cout << "Fahrrad breite: "<< breite << '\n';
      std::cout << "Fahrrad Radzahl: "<<radzahl << '\n';
      std::cout << "Fahrrad anzahlgaenge: "<<anzahlgaenge << '\n';
          }
  ~Fahrrad(){}
};


class Rickscha : public LandTransportmittel{
private:
  std::string farbe;
  int anzahlpersonen;
public:
  void schieben(double km){
    }
  void ziehen(int anzahlpersonen){

    }
  Rickscha(){
    }
  Rickscha(double hoehe, double breite, int radzahl, std::string farbe){
    hoehe = 3.5;
    breite =1.4;
    radzahl = 3;
    farbe="lilablassblau";
    std::cout << "Rickscha hoehe: "<<hoehe << '\n';
    std::cout << "Rickscha breite: "<< breite << '\n';
    std::cout << "Rickscha Radzahl: "<<radzahl << '\n';
    std::cout << "Rickscha farbe: "<<farbe << '\n';
    }
    ~Rickscha(){}
};


class Auto : public LandTransportmittel{
private:
  double spritverbrauch;
  int liter;
public:
  void tanken(int liter){
    }
  void fahren(double km){

    }
  Auto(){
    }
  Auto(double hoehe, double breite, int radzahl, int liter, double km){
    hoehe=4;
    breite=8;
    radzahl=4;
    liter=69;
    km=420;
    std::cout << "Auto hoehe: "<<hoehe << '\n';
    std::cout << "Auto breite: "<< breite << '\n';
    std::cout << "Auto Radzahl: "<<radzahl << '\n';
    std::cout << "Auto liter: "<<liter << '\n';
    std::cout << "Auto km: "<<km << '\n';
    }
    ~Auto(){}
};
