#include <iostream>
#include <cstring>
#include "Soft.h"

using namespace std;

Software::Software()
{
this->name = "block";
this->type = "note";
this->author = "price";
}
bool Software::operator> (const Software &s) const
{
if (name>s.name)
{return 1;}
return 0;
}

bool Software::operator< (const Software &s) const
{
if (name<s.name)
{return 1;}
return 0;
}
bool Software::operator>= (const Software &s) const
{
if (name>=s.name)
{return 1;}
return 0;
}
bool Software::operator<= (const Software &s) const
{
if (name<=s.name)
{return 1;}
return 0;
}
bool Software::operator==(const Software &s)const
{
if(name == s.name &&
type == s.type &&
author == s.author)
return 1;
return 0;
}
bool Software::operator!= (const Software & s) const
{
if (*(this) == s)
return 0;
return 1;
}
ostream& operator << (ostream &out, const Software &s)
{
out << "Name: " << s.name << "\nType: "<< s.type << "\nAuthor: " << s.author << endl;
return out;
}

istream& operator >> (istream &in, Software &s)
{
in >> s.name;
in >> s.type;
in >> s.author;
return in;
}

Software&Software::operator=(Software &s)
{
this-> name = s.name;
this-> type = s.type;
this-> author = s.author;
return *this;
}
