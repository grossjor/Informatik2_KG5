#pragma once
#include <iostream>
#include <string>
using namespace std;

class Datum {

private:
  int tag = 9;
  int jahr = 2000;
  int monat = 3;

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
int tage_pro_monat[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Volle Monate
   for (int i = 1; i < monat; i++){
     ret += tage_pro_monat[i - 1];
     ret += gettag();
      std::cout << ret << gettag()<< '\n';
   }
   if(sjahr == 1 && getmonat()>=3) {
     ret = ret+1;

   }
   std::cout << ret << '\n';

    }


};
