#include "Datum.h"
#include <iostream>
#include <string>

int Datum::point_zaehler{ 0 };
bool Datum::flag{false};
int main() {

Datum a;
a.istschaltjahr(1);
a.tagdesjahres();
return 0;
}
