#include<iostream>
#include"PhysicalNumber.h"

using namespace std;

ariel::PhysicalNumber::PhysicalNumber(int n,ariel::Unit unit){
}
bool ariel::PhysicalNumber:: operator> (const ariel::PhysicalNumber& l);
bool ariel::PhysicalNumber:: operator< (const ariel::PhysicalNumber& l);
bool ariel::PhysicalNumber:: operator>= (const ariel::PhysicalNumber& l);
bool ariel::PhysicalNumber:: operator<= (const ariel::PhysicalNumber& l);
bool ariel::PhysicalNumber:: operator== (const ariel::PhysicalNumber& l);
ariel::PhysicalNumber ariel::PhysicalNumber:: operator++(const ariel::PhysicalNumber& l);
ariel::PhysicalNumber ariel::PhysicalNumber:: operator--(const ariel::PhysicalNumber& l);
ariel::PhysicalNumber& ariel::PhysicalNumber:: operator+ (const ariel::PhysicalNumber& l);
ariel::PhysicalNumber& ariel::PhysicalNumber:: operator+= (const ariel::PhysicalNumber& l);
ariel::PhysicalNumber& ariel::PhysicalNumber:: operator- (const ariel::PhysicalNumber& l);
ariel::PhysicalNumber& ariel::PhysicalNumber:: operator-= (const ariel::PhysicalNumber& l);
istream& ariel::PhysicalNumber:: operator >> (istream & is,ariel::PhysicalNumber& f);
ostream& ariel::PhysicalNumber:: operator<<(ostream & os,ariel::PhysicalNumber& f);
