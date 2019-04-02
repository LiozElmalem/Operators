#include<iostream>
#include"PhysicalNumber.h"

using namespace std;
using ariel::PhysicalNumber;

bool operator > (const PhysicalNumber& l,const PhysicalNumber& r);
bool operator < (const PhysicalNumber& l,const PhysicalNumber& r);
bool operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
bool operator <= (const PhysicalNumber& l,const PhysicalNumber& r);
bool operator == (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber operator ++(PhysicalNumber& l);
PhysicalNumber operator --(PhysicalNumber& l);
PhysicalNumber operator + (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber operator += (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber operator - (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber operator -= (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber operator - (const PhysicalNumber& l);
PhysicalNumber operator + (const PhysicalNumber& l);
istream& operator >> (istream & is,PhysicalNumber& f);
ostream& operator<<(ostream & os,const PhysicalNumber& f);
