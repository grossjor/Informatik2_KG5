#pragma once
#include <iostream>
#include <string>
using namespace std;

class Datum {

private:
  int tag = 1;
  int jahr = 1;
  int monat = 1;

public:
  int irgendeinjahr = 0;

  Datum () {}

  Datum (int tag, int monat, int Jahr);

  ~Datum () {}

int gettag() return {tag;}
int getmonat() return {tag;}
int getjahr) return {tag;}

  void IstSchaltjahr(int irgendeinjahr) {


    int irgendeinjahr=0;
    {
    cout<<"Geben sie Die Jahreszahl ein: \n"<<endl;
    cin>>irgendeinjahr;
    if ( ( (irgendeinjahr%4==0) && (irgendeinjahr%100!=0) ) || (irgendeinjahr%400==0) )

    {
    cout<<"Schaltjahr!"<<endl;
    }
    else
    {
    cout<<"Kein Schaltjahr!"<<endl;
    }

    system("PAUSE");

    return 0;
    }


  }
};
