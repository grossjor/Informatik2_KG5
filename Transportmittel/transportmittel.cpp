#include "transportmittel.h"
#include <iostream>
#include <string>


int main() {

Transportmittel a;
Transportmittel(1,1);
a.bewegen("West");
a.~Transportmittel();

LandTransportmittel b;
LandTransportmittel(1,1,1);
b.fahren(3);
b.schieben(4);
b.~LandTransportmittel();

WasserTransportmittel c;
WasserTransportmittel(1,1,1);
c.anlegen("Travemuende");
c.ablegen("Kiel");
c.~WasserTransportmittel();

Fahrrad d;
Fahrrad(1,1,1,1);
d.freihaendigfahren("Luka");
d.schieben(5);
d.~Fahrrad();

Rickscha e;
Rickscha(1,1,1,"1");
e.schieben(123);
e.ziehen(13);
e.~Rickscha();

Auto f;
Auto(4,8,4,69,420);
f.tanken(23);
f.fahren(654);
return 0;
}
