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
		cout << "\nКакое задание?";
		cin >> z;
		if (z == 0)
		{
			break;
		}
		else if (z == 1)
		{
			//1.Напишите функцию int f(int m2, int m1, int m0), в которой заданы значения всех трех параметров по умолчанию. Это функция вычисляет и возвращает натуральное число, первая (сотни), вторая (десятки) и третья (единицы) цифры которого равны соответственно m2, m1, m0. Требуется определить функцию так, чтобы после выполнения оператора x=f() значение x равнялось 567.
			int x;
			x = f1();
			cout << x << endl;
		}
		else if (z == 2)
		{
			//2.Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций
			cout << f(5, 10) << endl;
			cout << f(5, 10, 5) << endl;

		}
		else if (z == 3)
		{
			//3.Операторы int u=f(3, 4); double v=f(20.5, 10.5); myofs<<”u=”<<u<<” v=”<<v<<endl; дают в результате u=7 v=10 (т.е. соответственно сумму и произведение своих параметров). Напишите функции f(…,…).
			int u, v;
			u = f(3, 4);
			v = f(20.5, 10.5);
			cout << "u=" << u << "\t v=" << v << endl;
		}
		else if (z == 4)
		{
			//4.Напишите функцию f(double& a, double& b, double c, double q), которая возвращает катеты прямоугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов).  
			double a, b, c = 15.8, q = 28;
			kat(a, b, c, q);
			cout << "Гипотенуза тругольника = " << c << " см, острый угол = " << q << " градусов, катеты равны " << a << " && " << b << endl;
		}
		else if (z == 5)
		{
			/*Напишите функцию f(double* a, double* b, double c, double q), которая возвращает катеты прямоугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов).*/
			double a, b, c = 13.2, q = 24;
			kat1(&a, &b, c, q);
			cout << "Гипотенуза тругольника = " << c << " см, острый угол = " << q << " градусов, катеты равны " << a << " && " << b << endl;
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

