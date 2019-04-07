#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "PhysicalNumber.h"
#include "Unit.h"
using ariel::PhysicalNumber, ariel::Unit;

int main() {
  try {
    PhysicalNumber a(2, Unit::KM);   // 2 kilometers
    PhysicalNumber b(80, Unit::CM);   // 80 cm
    PhysicalNumber c(1, Unit::TON);   // 1 ton
    PhysicalNumber d(102, Unit::G);   // 102 g

    cout << a << endl;




  } catch (...) {
    cout << "Unexpected exception!" << endl;
  }
  return 100;
}
