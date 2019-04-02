#pragma once
#include <iostream>
#include "Unit.h"

using namespace std;

namespace ariel{
class PhysicalNumber{
  private:
    Unit unit;
    int n;
  public:
     PhysicalNumber(int n,ariel::Unit unit);
     ~PhysicalNumber();
     friend bool operator > (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator < (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator <= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator == (const PhysicalNumber& l,const PhysicalNumber& r);
     friend PhysicalNumber operator ++(PhysicalNumber& l);
     friend PhysicalNumber operator --(PhysicalNumber& l);
     friend PhysicalNumber operator + (const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator += (const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator - (const PhysicalNumber& l,const PhysicalNumber& r);
     friend PhysicalNumber operator - (const PhysicalNumber& l);
     friend PhysicalNumber operator + (const PhysicalNumber& l);
  	 friend PhysicalNumber operator -= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend istream& operator >> (istream & is,PhysicalNumber& f);
     friend ostream& operator<<(ostream & os,const PhysicalNumber& f);
};
};

