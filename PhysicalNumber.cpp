#include<iostream>
#include "PhysicalNumber.h"

using namespace std;
using ariel::PhysicalNumber;
PhysicalNumber::PhysicalNumber(int num,Unit un):n(num),unit(un){}
PhysicalNumber::~PhysicalNumber(){//להוסיף
}
bool ariel::operator > (const PhysicalNumber& l,const PhysicalNumber& r){return true;}
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
