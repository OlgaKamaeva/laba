#include <iostream>
#include "soft.h"
#include <cstring>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

cout << "\t\tИнформация" << endl;
Software s;
cout <<s;

Software fl;
string name;
string type;
string author;

cout << "\n\t\tВведите новые значения для name, type, author:\n";
cin >> fl;
cout <<"\n" <<fl;

cout << "\n\t\tРассмотрим работу операторов: \n" << endl;

cout << "\t\tОператор >" << endl;
if (s>fl)
{cout << "Первоначальные значение name Больше введенного" << endl;}
else
{cout << "Первоначальные значение name Меньше введенного" << endl;}

cout << "\n\t\tОператор <" << endl;
if (s<fl)
{cout << "Первоначальные значение name Меньше введенного" << endl;}
else
{cout << "Первоначальные значение name Больше введенного" << endl;}

cout << "\n\t\tОператор >=" << endl;
if (s>=fl)
{cout << "Первоначальные значение name Больше или равно введенного" << endl;}
else
{cout << "Первоначальные значение name Меньше введенного" << endl;}

cout << "\n\t\tОператор <=" << endl;
if (s<=fl)
{cout << "Первоначальные значение name Меньше или равно введенного" << endl;}
else
{cout << "Первоначальные значение name Больше введенного" << endl;}

cout << "\n\t\tОператор ==" << endl;
if (s==fl)
{cout << "Первоначальные значения Равны введенным" << endl;}
else
{cout << "Первоначальные значения Не равны введенным" << endl;}

cout << "\n\t\tОператор !="<< endl;
if (s!=fl)
{cout << "Первоначальные значения НЕ Равны введенным" << endl;}
else
{cout << "Первоначальные значения Равны введенным" << endl;}

cout << "\n\t\tОператор =" << endl;
s=fl;
cout << s << endl;


return 0;
}
