#include "NumberWithUnits.hpp"

#include <iostream>
#include <string>

using namespace ariel;
using namespace std;
namespace ariel {
   
    void NumberWithUnits::read_units(ifstream & stream){}

    NumberWithUnits NumberWithUnits::operator+ (const NumberWithUnits &other)const{
        NumberWithUnits n (5,"d");
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator+ ()const{
        NumberWithUnits n = *this;
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& other){
        NumberWithUnits n (5,"d");
        return n;
    }
    NumberWithUnits NumberWithUnits::operator- (const NumberWithUnits &other)const{
        NumberWithUnits n (5,"d");
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator- ()const{
        NumberWithUnits n = * this;
        n.v = -n.v;
        return n;
    } 
    NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& other){
        NumberWithUnits n (5,"d");
        return n;
    }
    NumberWithUnits NumberWithUnits::operator++(){
        this->v += 1;
        return * this;
    }
    NumberWithUnits NumberWithUnits::operator++(int bap){
        NumberWithUnits u = *this;
        this->v+=1;
        return u;
    }
    NumberWithUnits NumberWithUnits::operator--(){
        this->v -= 1;
        return * this;
    }
    NumberWithUnits NumberWithUnits::operator--(int bap){
        NumberWithUnits u = *this;
        this->v-=1;
        return u;
    }


    bool  NumberWithUnits::operator <(const NumberWithUnits & other)const{
        return false;
    }
    bool  NumberWithUnits::operator <=(const NumberWithUnits & other)const{
        return false;
    }
    bool  NumberWithUnits::operator >(const NumberWithUnits & other)const{
        return false;
    }
    bool  NumberWithUnits::operator >=(const NumberWithUnits & other)const{
        return false;
    }
    bool  NumberWithUnits::operator ==( const NumberWithUnits& other)const{
        return this->unit == other.getUnit() && other.getValue() == this->v;
    }
    bool  NumberWithUnits::operator !=(const NumberWithUnits & other)const{
        return false;
    }
    istream & operator >> (istream & IS, const NumberWithUnits & other){
        return IS;
    }
    ostream & operator << (ostream & OS, const NumberWithUnits & other){
        OS << other.v << "[" <<other.unit << "]";
        return OS;
    }
    NumberWithUnits operator * (double d,const NumberWithUnits & n){
        NumberWithUnits a = n;
        a.setValue(a.getValue() * d);
        return a;
    }
    NumberWithUnits NumberWithUnits::operator * (double val){
        NumberWithUnits u;
        return u;
    }
}