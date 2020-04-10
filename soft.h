#ifndef WIND_H_INCLUDED
#define WIND_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

class Software
{
private:
string name;
string type;
string author;

public:
Software();
bool operator> (const Software &s) const;
bool operator< (const Software &s) const;
bool operator>= (const Software &s) const;
bool operator<= (const Software &s) const;
bool operator== (const Software &s) const;
bool operator!= (const Software &s) const;
friend ostream& operator << (ostream &out, const Software &s);
friend istream& operator >> (istream &in, Software &s);
Software& operator=(Software &s);
};

#endif // WIND_H_INCLUDED
