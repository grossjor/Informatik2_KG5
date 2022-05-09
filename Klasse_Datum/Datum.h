#pragma once
#include <iostream>
#include <string>
using namespace std;

class Datum {

private:
  int tag = 1;
  int jahr = 2000;
  int monat = 1;

public:
  int irgendeinjahr = 0;
  int sjahr = 0;

Datum () {}

  Datum (int tag, int monat, int Jahr);

  ~Datum () {}

int gettag() {return tag;}
int getmonat() {return monat;}
int getjahr() {return jahr;}

void istschaltjahr(int irgendeinjahr) {
irgendeinjahr = getjahr();
    //cout<<"Geben sie Die Jahreszahl ein: \n"<<endl;
    //cin>>irgendeinjahr;
    if ( ( (irgendeinjahr%4==0) && (irgendeinjahr%100!=0) ) || (irgendeinjahr%400==0) )

    {
    cout<<"Schaltjahr!"<<endl;
    sjahr = 1;

    }
    else
    {
    cout<<"Kein Schaltjahr!"<<endl;
    sjahr = 0;
    }

    system("PAUSE");


    }





void tagdesjahres(int tag, int monat, int jahr){

        int tage_pro_monat[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int ret = 0;

        // Volle Monate
        for (int i = 1; i < monat; i++){

          ret += tage_pro_monat[i - 1];
        }
        // Tag des aktuellen Monats
        ret += tag;
        // Schaltjahr
        ret += (ist_schaltjahr(jahr) == true && monat > 2 ? 1 : 0);
    //    return ret;
    }
    bool ist_schaltjahr(int jahr){

        bool schaltjahr = false;

        if (jahr % 4 == 0) schaltjahr = true;
        if (jahr % 100 == 0) schaltjahr = false;
        if (jahr % 400 == 0) schaltjahr = true;
      //  return schaltjahr;
    }


};
