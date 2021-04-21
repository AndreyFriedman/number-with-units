#ifndef NUMBERWITHUNITS_

#define NUMBERWITHUNITS_

#include <string>
#include <iostream>

using namespace std;
namespace ariel
{
    static string units [10] = {"cm","m","km","g","kg","ton","sec","min","hour","USD"};
    class NumberWithUnits
    {
        private: double v;
        string unit;
        double convert (string u1,string u2, double value);
        public: NumberWithUnits(){
            v = 0;
            unit = "km";
        }
        NumberWithUnits(double v,string unit){
            this->v = v;
            this->unit = unit;
        }
        static void read_units(ifstream & stream);
        NumberWithUnits operator + (const NumberWithUnits & other)const;
        NumberWithUnits operator + ()const;
        NumberWithUnits operator +=(const NumberWithUnits & other);
        NumberWithUnits operator - (const NumberWithUnits & other)const;
        NumberWithUnits operator - ()const;
        NumberWithUnits operator -=(const NumberWithUnits & other);
        NumberWithUnits operator ++();
        NumberWithUnits operator ++(int bap);
        NumberWithUnits operator --();
        NumberWithUnits operator --(int bap);    

        bool operator < (const NumberWithUnits & other)const;
        bool operator <= (const NumberWithUnits & other)const;
        bool operator > (const NumberWithUnits & other)const;
        bool operator >= (const NumberWithUnits & other)const;
        bool operator == (const NumberWithUnits & other)const;
        bool operator != (const NumberWithUnits & other)const;

        friend ostream & operator << (ostream & os, const NumberWithUnits & other);
        friend istream & operator >> (istream & is, const NumberWithUnits & other);
        friend NumberWithUnits operator * (double d,const NumberWithUnits & n);
        NumberWithUnits operator * ( double  value);



        string getUnit()const{
            return unit;
        }
        void setValue(double v){
            this->v = v;
        }
        double getValue()const{
            return v;
        }
    };
}
#endif