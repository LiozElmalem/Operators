#include<iostream>
#include <string>
#include "PhysicalNumber.h"
using namespace std;
using ariel::PhysicalNumber;


PhysicalNumber::PhysicalNumber(double num,Unit un):n(num),unit(un){}
PhysicalNumber::~PhysicalNumber(){//להוסיף
}
string get_string_unit(PhysicalNumber l){
return "" + l.get_unit();
}
string get_type(const PhysicalNumber& l){
  std::string s=get_string_unit(l);
  if(s.compare("M")==0||s.compare("CM")==0||s.compare("KM")==0)return "LENGTH";
  if(s.compare("G")==0||s.compare("KG")==0||s.compare("TON")==0)return "SIZE";
  if(s.compare("SEC")==0||s.compare("MIN")==0||s.compare("HOUR")==0)return "TIME";
  return "";
}
double caster(const PhysicalNumber& l){
  PhysicalNumber t(l);
  string type=get_type(l);
  if(type.compare("LENGTH")==0){
    string temp=get_string_unit(l);
    if(temp.compare("M")){
      return t.get_number()*100;
    }
    else if(temp.compare("KM")){
      return t.get_number()*100000;
    }
    else{
      return t.get_number();
    }
  }
  else if(type.compare("SIZE")==0){
  string temp=get_string_unit(l);
    if(temp.compare("TOsN")){
      return t.get_number()*907184.74;
    }
    else if(temp.compare("KG")){
      return t.get_number()*1000;
    }
    else{
      return t.get_number();
    }
  }
  else{
    string temp=get_string_unit(l);
    if(temp.compare("HOUR")){
      return t.get_number()*3600;
    }
    else if(temp.compare("MIN")){
      return t.get_number()*60;
    }
    else{
      return t.get_number();
    } 
  }
}
bool ariel::operator > (const PhysicalNumber& l,const PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      return Asize>Bsize;
    } 
  }
bool ariel::operator < (const PhysicalNumber& l,const PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      return Asize<Bsize;
    } 
  }
bool ariel::operator >= (const PhysicalNumber& l,const PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      return Asize>=Bsize;
    } 
  }
bool ariel::operator <= (PhysicalNumber& l,PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      return Asize<=Bsize;
    } 
  }
bool ariel::operator == (const PhysicalNumber& l,const PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      return Asize==Bsize;
    } 
  }
PhysicalNumber ariel::operator ++(PhysicalNumber& l){
  l.set_number(l.get_number()+1);
  return l;}
PhysicalNumber ariel::operator --(PhysicalNumber& l){
  l.set_number(l.get_number()-1);
  return l;}
PhysicalNumber ariel::operator + (PhysicalNumber& l,PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
  PhysicalNumber temp(Asize+Bsize,l.get_unit());
  return temp;}
}
PhysicalNumber ariel::operator += (PhysicalNumber& l,const PhysicalNumber& r){
   if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      l.set_number(Asize+Bsize);
   return l;}
}
PhysicalNumber ariel::operator - (PhysicalNumber& l,PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
  PhysicalNumber temp(Asize-Bsize,l.get_unit());
  return temp;}
}
PhysicalNumber ariel::operator - (PhysicalNumber& l){
  l.set_number(-l.get_number());
  return l;}
PhysicalNumber ariel::operator + (const PhysicalNumber& l){return l;}
PhysicalNumber ariel::operator -= (PhysicalNumber& l,const PhysicalNumber& r){
  if(get_type(l).compare(get_type(r))!=0){
    throw std::invalid_argument("Exception,they must be from the type");}
    else{
      double Asize=caster(l);
      double Bsize=caster(r);
      l.set_number(Asize+Bsize);
   return l;}
}
istream& ariel::operator >> (istream & is,PhysicalNumber& f){return is;}
ostream& ariel::operator<<(ostream & os,const PhysicalNumber& f){return os;}
