#include <iostream>
#include "soft.h"
#include <cstring>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

cout << "\t\t����������" << endl;
Software s;
cout <<s;

Software fl;
string name;
string type;
string author;

cout << "\n\t\t������� ����� �������� ��� name, type, author:\n";
cin >> fl;
cout <<"\n" <<fl;

cout << "\n\t\t���������� ������ ����������: \n" << endl;

cout << "\t\t�������� >" << endl;
if (s>fl)
{cout << "�������������� �������� name ������ ����������" << endl;}
else
{cout << "�������������� �������� name ������ ����������" << endl;}

cout << "\n\t\t�������� <" << endl;
if (s<fl)
{cout << "�������������� �������� name ������ ����������" << endl;}
else
{cout << "�������������� �������� name ������ ����������" << endl;}

cout << "\n\t\t�������� >=" << endl;
if (s>=fl)
{cout << "�������������� �������� name ������ ��� ����� ����������" << endl;}
else
{cout << "�������������� �������� name ������ ����������" << endl;}

cout << "\n\t\t�������� <=" << endl;
if (s<=fl)
{cout << "�������������� �������� name ������ ��� ����� ����������" << endl;}
else
{cout << "�������������� �������� name ������ ����������" << endl;}

cout << "\n\t\t�������� ==" << endl;
if (s==fl)
{cout << "�������������� �������� ����� ���������" << endl;}
else
{cout << "�������������� �������� �� ����� ���������" << endl;}

cout << "\n\t\t�������� !="<< endl;
if (s!=fl)
{cout << "�������������� �������� �� ����� ���������" << endl;}
else
{cout << "�������������� �������� ����� ���������" << endl;}

cout << "\n\t\t�������� =" << endl;
s=fl;
cout << s << endl;


return 0;
}
