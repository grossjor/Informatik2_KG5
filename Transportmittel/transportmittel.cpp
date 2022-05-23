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

return 0;
}
