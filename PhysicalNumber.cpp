#include<iostream>
#include"PhysicalNumber.h"

using namespace std;

ariel::PhysicalNumber::PhysicalNumber(int n,Unit unit){
  this->unit = unit;
  this->n = n;
}
bool ariel::PhysicalNumber:: operator>(const PhysicalNumber& l,const PhysicalNumber& r);
bool ariel::PhysicalNumber:: operator<(const PhysicalNumber& l,const PhysicalNumber& r);
bool ariel::PhysicalNumber:: operator>=(const PhysicalNumber& l,const PhysicalNumber& r);
bool ariel::PhysicalNumber:: operator<=(const PhysicalNumber& l,const PhysicalNumber& r);
bool ariel::PhysicalNumber:: operator==(const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber ariel::PhysicalNumber:: operator--(const PhysicalNumber& l);
PhysicalNumber ariel::PhysicalNumber:: operator++(const PhysicalNumber& l);
PhysicalNumber ariel::PhysicalNumber:: operator+(const PhysicalNumber& r,const PhysicalNumber& r);
PhysicalNumber ariel::PhysicalNumber:: operator+= (const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber ariel::PhysicalNumber:: operator-(const PhysicalNumber& l,const PhysicalNumber& r);
PhysicalNumber ariel::PhysicalNumber:: operator-= (const PhysicalNumber& l,const PhysicalNumber& r);
istream ariel::PhysicalNumber:: operator>> (PhysicalNumber& f);
ostream ariel::PhysicalNumber:: operator<< (PhysicalNumber& f);
