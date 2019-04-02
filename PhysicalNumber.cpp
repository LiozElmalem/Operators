#include<iostream>
#include "PhysicalNumber.h"

using namespace std;
using ariel::PhysicalNumber;


PhysicalNumber::PhysicalNumber(int num,Unit un):n(num),unit(un){}
PhysicalNumber::~PhysicalNumber(){//להוסיף
}
string ariel::unit_type(int unit){
  string ans;
  switch (unit) {
    case 0:
    ans = "M";
    case 1:
    ans = "CM";
    case 2:
    ans = "KM";
    case 3:
    ans = "SEC";
    case 4:
    ans = "MIN";
    case 5:
    ans = "HOUR";
    case 6:
    ans = "G";
    case 7:
    ans = "KG";
    case 8:
    ans = "TON";
  }
  return ans;
}
bool ariel::operator > (const PhysicalNumber& l,const PhysicalNumber& r){
if(l.getUnit() == r.getUnit())
return l.getN() > r.getN();
  return true;
}
bool ariel::operator < (const PhysicalNumber& l,const PhysicalNumber& r){return true;}
bool ariel::operator >= (const PhysicalNumber& l,const PhysicalNumber& r){return true;}
bool ariel::operator <= (const PhysicalNumber& l,const PhysicalNumber& r){return true;}
bool ariel::operator == (const PhysicalNumber& l,const PhysicalNumber& r){return true;}
PhysicalNumber ariel::operator ++(PhysicalNumber& l){return l;}
PhysicalNumber ariel::operator --(PhysicalNumber& l){return l;}
PhysicalNumber ariel::operator + (const PhysicalNumber& l,const PhysicalNumber& r){return l;}
PhysicalNumber ariel::operator += (const PhysicalNumber& l,const PhysicalNumber& r){return l;}
PhysicalNumber ariel::operator - (const PhysicalNumber& l,const PhysicalNumber& r){return l;}
PhysicalNumber ariel::operator - (const PhysicalNumber& l){return l;}
PhysicalNumber ariel::operator + (const PhysicalNumber& l){return l;}
PhysicalNumber ariel::operator -= (const PhysicalNumber& l,const PhysicalNumber& r){return l;}
istream& ariel::operator >> (istream & is,PhysicalNumber& f){return is;}
ostream& ariel::operator<<(ostream & os,const PhysicalNumber& f){return os;}
