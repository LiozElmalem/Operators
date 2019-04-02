#include <iostream>
#pragma once
using namespace std;

namespace ariel {
  enum Unit{
    M,
    KM,
    CM,
    SEC,
    MIN,
    HOUR,
    G,
    KG,
    TON
};
string name(Unit un){
  switch(un){
  case 0:
  return "M";
  case 1:
  return "KM";
  case 2:
  return "CM";
  case 3:
  return "SEC";
  case 4:
  return "MIN";
  case 5:
  return "HOUR";
  case 6:
  return "G";
  case 7:
  return "KG";
  case 8:
  return "TON";
}
}
};
