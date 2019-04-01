#pragma once
#include <iostream>
#include"Unit.h"

using namespace std;
using ariel::Unit;

namespace ariel{
class PhysicalNumber{
  private:
    Unit unit;
    int n;
  public:
    PhysicalNumber(int n,Unit unit);
     friend bool operator>(const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator<(const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator>=(const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator<=(const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator==(const PhysicalNumber& l,const PhysicalNumber& r);
     friend PhysicalNumber operator++(const PhysicalNumber& l);
     friend PhysicalNumber operator--(const PhysicalNumber& l);
     friend PhysicalNumber operator+(const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator+= (const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator-(const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator-= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend istream operator>> (PhysicalNumber& f);
     friend ostream operator<< (PhysicalNumber& f);

};
