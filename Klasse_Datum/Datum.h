#pragma once
#include <iostream>
#include <string>
using namespace std;
//extern int counter= 0;
class Datum {

private:
  int tag = 9;
  int monat = 3;
  int jahr = 2000;
  int point_nummer;
  static int point_zaehler;
  static bool flag;
  int counter= 0;

public:
  int irgendeinjahr = 0;
  int sjahr = 0;
  int ret = 0;
  int s=0;
  int* setcounter { &counter};
  int localboi = 0; //sagt ob die klasse iniziert wurde und den counter schon erhöhrt hat
  int maxclasses = 1; //maximale anzahl an inizierten klassen
static int get_pointcount() { return point_zaehler; }
Datum () {
  point_nummer = ++point_zaehler;
  if (flag==true) {

  cout <<"Standardkonstruktor von Objekt Nummer "<<point_nummer << endl;
}
  if (point_zaehler>=maxclasses) {
    std::cout << "Das sind zu viele Instanzen der Klasse" << '\n';
  }
}


Datum (int tag, int monat, int Jahr){
  point_nummer = ++point_zaehler;
    if (flag==true) {
  cout <<"Allgemeiner Konstruktor von Objekt Nummer"<<point_nummer<<endl;}
  if (point_zaehler>=maxclasses) {
    std::cout << "Das sind zu viele Instanzen der Klasse" << '\n';
  }
};

~Datum () {

  if (flag==true) {
cout <<"Destruktor von Objekt Nummer"<<point_nummer<<endl;}
  point_nummer = --point_zaehler;
}

int gettag() {return tag;}
int getmonat() {return monat;}
int getjahr() {return jahr;}
int getcounter() {return counter;}



void istschaltjahr(int irgendeinjahr) {

irgendeinjahr = getjahr();

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
/*  if (getcounter()>=maxclasses) {
    std::cout << "das sind zu viele klassen" << '\n';
  }
if (localboi==0) {
  counter= counter+1;
  localboi++;
}*/
irgendeinjahr = getjahr();

    if ( ( (irgendeinjahr%4==0) && (irgendeinjahr%100!=0) ) || (irgendeinjahr%400==0) )
    {
    sjahr = 1;
    }
    else
    {
    sjahr = 0;
    }
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
   std::cout <<"Der "<<gettag()<<"."<<getmonat()<<". ist Tag Nummer "<< ret <<" des Jahres "<<getjahr()<< '\n';

    }


};
//nebenbei verstehe ich auch nicht was mit der geschwätzig methode gemeint ist, und jetzt ist es zu spät um zu fragen
