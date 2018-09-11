//
// Лабораторная работа №4. Классы. Поля и vетоды
// point.cpp
//
#include <iostream>
#include "point.h"
#include <cmath>

point get_point()
{
    point p;
    std::cin >> p.x >> p.y;
    if (!std::cin)
        throw std::domain_error("Некорректные координаты точки");
    return p;
}

void print(point p)
{
    std::cout << "( " << p.get_x() << ", " << p.get_y() << " )";
}

double point::distance_to(point const & target) const
{
	return sqrt ((x-target.x)*(x - target.x )+ (y - target.y)*(y - target.y));
}

void Triangl::tipeTriangl()
{
	double a = p1.distance_to(p2);
	double b = p2.distance_to(p3);
	double c = p3.distance_to(p1);
	if ( abs (a*a - (b * b + c * c)) <=0.00001 || abs( b * b - (a * a + c * c) )<= 0.00001 || abs(c * c - (b * b + a * a)) <= 0.00001)
		std::cout << "Прямоугольник" << std::endl;
	else
		if (a*a > b*b + c * c || b * b > a*a + c * c || c * c > b*b + a * a)
			std::cout << "Тупоугольник" << std::endl;
		else
			std::cout << "Остроугольки" << std::endl;


}

double Triangl::S() const
{
	double a = p1.distance_to(p2);
	double b = p2.distance_to(p3);
	double c = p3.distance_to(p1);
	double p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangl::Rv() const
{
	double a = p1.distance_to(p2);
	double b = p2.distance_to(p3);
	double c = p3.distance_to(p1);
	double p = (a + b + c) / 2;
	double S = this->S(); 
	
	return S/p;
}

double Triangl::Ro() const
{
	double a = p1.distance_to(p2);
	double b = p2.distance_to(p3);
	double c = p3.distance_to(p1);
	double p = (a + b + c) / 2;
	double S = this->S();
	return a*b*c/S;
}
