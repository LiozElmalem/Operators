#pragma once
#include <iostream>
#include "Unit.h"

using namespace std;

namespace ariel{
class PhysicalNumber{
   private:
     // private members
     Unit unit;
     double n;
  public:
    //constructors
     PhysicalNumber(double n,ariel::Unit unit);
     
     //operators:
     friend bool operator > (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator < (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator <= (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator == (const PhysicalNumber& l,const PhysicalNumber& r);
     friend bool operator != (const PhysicalNumber& l,const PhysicalNumber& r);
     PhysicalNumber& operator ++();
     PhysicalNumber& operator --();
     const PhysicalNumber& operator ++(int);
     const PhysicalNumber& operator --( int);
     friend PhysicalNumber operator + (const PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator += (PhysicalNumber& l,const PhysicalNumber& r);
  	 friend PhysicalNumber operator - (const PhysicalNumber& l,const PhysicalNumber& r);
     friend PhysicalNumber operator - (const PhysicalNumber& l);
     friend PhysicalNumber operator + (const PhysicalNumber& l);
  	 friend PhysicalNumber operator -= (PhysicalNumber& l,const PhysicalNumber& r);
     friend istream& operator >> (istream & is,PhysicalNumber& f);
     friend ostream& operator <<(ostream & os,const PhysicalNumber& f);


     // assisting function
     double cast_it_to(ariel::Unit to_type) const;
     string get_type(const PhysicalNumber& l); // return LENGTH||TIME||WEIGHT
     Unit get_unit() const{return unit;} //return the original member of the class
     double get_number() const{return n;} // return the original value
     void set_number(double number){n=number;}
     string get_string_unit(const PhysicalNumber& l); // return M,CM..HOUR..TON
     double caster(const PhysicalNumber& l); // to compare between to physical number "power"
};
};
