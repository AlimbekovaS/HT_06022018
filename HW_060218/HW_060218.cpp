#include<iostream>
#include<stdio.h>
using namespace std;
unsigned short int z;
int f1(int m2 = 5, int m1 = 6, int m0 = 7);
int f(int a, int b);
int f(int a, int b, int c);
double f(double a, double b);

void kat(double& a, double& b, double c, double q);
void kat1(double* a, double* b, double c, double q);
void main() {
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "\n����� �������?";
		cin >> z;
		if (z == 0)
		{
			break;
		}
		else if (z == 1)
		{
			//1.�������� ������� int f(int m2, int m1, int m0), � ������� ������ �������� ���� ���� ���������� �� ���������. ��� ������� ��������� � ���������� ����������� �����, ������ (�����), ������ (�������) � ������ (�������) ����� �������� ����� �������������� m2, m1, m0. ��������� ���������� ������� ���, ����� ����� ���������� ��������� x=f() �������� x ��������� 567.
			int x;
			x = f1();
			cout << x << endl;
		}
		else if (z == 2)
		{
			//2.�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. ����������������� ������ ������������� �������
			cout << f(5, 10) << endl;
			cout << f(5, 10, 5) << endl;

		}
		else if (z == 3)
		{
			//3.��������� int u=f(3, 4); double v=f(20.5, 10.5); myofs<<�u=�<<u<<� v=�<<v<<endl; ���� � ���������� u=7 v=10 (�.�. �������������� ����� � ������������ ����� ����������). �������� ������� f(�,�).
			int u, v;
			u = f(3, 4);
			v = f(20.5, 10.5);
			cout << "u=" << u << "\t v=" << v << endl;
		}
		else if (z == 4)
		{
			//4.�������� ������� f(double& a, double& b, double c, double q), ������� ���������� ������ �������������� ������������, ���������� �������� ����� �, � ������ ���� q (��������).  
			double a, b, c = 15.8, q = 28;
			kat(a, b, c, q);
			cout << "���������� ����������� = " << c << " ��, ������ ���� = " << q << " ��������, ������ ����� " << a << " && " << b << endl;
		}
		else if (z == 5)
		{
			/*�������� ������� f(double* a, double* b, double c, double q), ������� ���������� ������ �������������� ������������, ���������� �������� ����� �, � ������ ���� q (��������).*/
			double a, b, c = 13.2, q = 24;
			kat1(&a, &b, c, q);
			cout << "���������� ����������� = " << c << " ��, ������ ���� = " << q << " ��������, ������ ����� " << a << " && " << b << endl;
		}
	}
	system("pause");
}
int f1(int m2, int m1, int m0)
{
	return (m2 * 100 + m1 * 10) + m0;
}
int f(int a, int b)
{
	return a + b;
}
int f(int a, int b, int c)
{
	return a + b + c;
}
double f(double a, double b)
{
	return a - b;
}
void kat(double& a, double& b, double c, double q)
{
	a = abs(c*sinf(q));
	double q1;
	q1 = 180 - 90 - q;
	b = abs(c*sinf(q1));
}

void kat1(double* a, double* b, double c, double q)
{
	*a = abs(c*sinf(q));
	double q1;
	q1 = 180 - 90 - q;
	*b = abs(c*sinf(q1));
}

