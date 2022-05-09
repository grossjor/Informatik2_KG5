#pragma once
#include <iostream>
#include <string>
using namespace std;

class Datum {

private:
  int tag = 9;
  int monat = 3;
  int jahr = 2000;


public:
  int irgendeinjahr = 0;
  int sjahr = 0;
  int ret = 0;



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





void tagdesjahres(){


switch (getmonat()) {
  case 1:
    ret = 0;
    break;
  case 2:
    ret=31; //0+31
    break;
  case 3:
    ret=59;  //31+28
    break;
  case 4:
    ret=90; //59+31
    break;
  case 5:
    ret=120; // 90+30
    break;
  case 6:
    ret=151; //120+31
    break;
  case 7:
    ret=181; //151+ 30
    break;
  case 8:
    ret=212; // 181+31
    break;
  case 9:
    ret=243; // 212+31
    break;
  case 10:
    ret=273;// 243+30
    break;
  case 11:
    ret=314;//273+31
    break;
  case 12:
    ret=334;//273+30
    break;
}
   if(sjahr == 1 && getmonat()>=3) {
     ret = ret+1;

   }
  ret=ret+gettag();
   std::cout << ret << '\n';

    }


};
