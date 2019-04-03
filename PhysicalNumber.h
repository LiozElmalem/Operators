#pragma once
#include <iostream>
#include "Unit.h"

using namespace std;

namespace ariel{
class PhysicalNumber{
   private:
   Unit unit;
     double n;
  public:
     PhysicalNumber(double n,ariel::Unit unit);
     ~PhysicalNumber();
     friend bool operator > (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator < (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator <= (PhysicalNumber& l,PhysicalNumber& r);
     friend bool operator == (const PhysicalNumber& l,const PhysicalNumber& r);
     friend PhysicalNumber operator ++(PhysicalNumber& l);
     friend PhysicalNumber operator --(PhysicalNumber& l);
     friend PhysicalNumber operator + (PhysicalNumber& l,PhysicalNumber& r);
  	 friend PhysicalNumber operator += (const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator - (PhysicalNumber& l,PhysicalNumber& r);
     friend PhysicalNumber operator - (PhysicalNumber& l);
     friend PhysicalNumber operator + (const PhysicalNumber& l);
  	 friend PhysicalNumber operator -= (PhysicalNumber& l,PhysicalNumber& r);
     friend istream& operator >> (istream & is,PhysicalNumber& f);
     friend ostream& operator<<(ostream & os,const PhysicalNumber& f);
     string get_type(const PhysicalNumber& l);
     Unit get_unit(){return unit;}
     double get_number(){return n;}
     double set_number(double number){n=number;}
     string get_string_unit(const PhysicalNumber& l);
     double caster(const PhysicalNumber& l);
};
};
