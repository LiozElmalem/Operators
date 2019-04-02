#include<iostream>
#include"PhysicalNumber.h"

using namespace std;
using ariel::PhysicalNumber;

inline bool PhysicalNumber::operator > (const PhysicalNumber& l,const PhysicalNumber& r);
inline bool PhysicalNumber::operator < (const PhysicalNumber& l,const PhysicalNumber& r);
inline bool PhysicalNumber::operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
inline bool PhysicalNumber::operator <= (const PhysicalNumber& l,const PhysicalNumber& r);
inline bool PhysicalNumber::operator == (const PhysicalNumber& l,const PhysicalNumber& r);
inline PhysicalNumber PhysicalNumber::operator ++(PhysicalNumber& l);
inline PhysicalNumber PhysicalNumber::operator --(PhysicalNumber& l);
inline PhysicalNumber PhysicalNumber::operator + (const PhysicalNumber& l,const PhysicalNumber& r);
inline PhysicalNumber PhysicalNumber::operator += (const PhysicalNumber& l,const PhysicalNumber& r);
inline PhysicalNumber PhysicalNumber::operator - (const PhysicalNumber& l,const PhysicalNumber& r);
inline PhysicalNumber PhysicalNumber::operator -= (const PhysicalNumber& l,const PhysicalNumber& r);
inline istream& PhysicalNumber::operator >> (istream & is,PhysicalNumber& f);
inline ostream& PhysicalNumber::operator<<(ostream & os,const PhysicalNumber& f);
