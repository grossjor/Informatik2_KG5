#include "transportmittel.h"
#include <iostream>
#include <string>


int main() {

Transportmittel a;
Transportmittel(1,2);
std::cout << a.gethoehe() << '\n';
a.bewegen("West");
  return 0;
}
