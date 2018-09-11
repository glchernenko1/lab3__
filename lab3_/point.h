//
// Лабораторная работа №4. Классы. Поля и vетоды
// point.h
//
#pragma once

// Точки будут содержать вещественные координаты,
// значит нам необходимо установить точность вычислений.
const double precision = 1E-10;



class point
{
private:
    double x, y;
public:    
    // Конструктор с параметрами.
	point(double x, double y) { this->x = x; this->y = y; };
    // Конструктор по умолчанию.
	point() { x = 0; y = 0; };
	~point() { x = 0; y = 0; };

	// Функция чтения точки с консоли.
	friend point get_point();
	friend class Triangl;
	

    // методы доступа к закрытым полям
	double get_x() const { return x; };
	double get_y() const { return y; };


    // Любые методы класса, не меняющие состояния его полей
    // должны объявляться с ключевым словом const.
    // Это показывает, что данные методы могут примеяться 
    // константными объектами этого класса.

    // Метод вычисления расстояния до другой точки.
    // Входные параметры:
    //      target - целевая точка.
	double distance_to(point const & target) const;

    // Любой класс или функция, объявленные дружественными,
    // будут иметь доступ к закрытым полям и методам класса.

    // Тестирующий класс.

    
};


class Triangl
{
	
private:
	point p1, p2, p3;
	public:
		Triangl() {
			p1;  p2; p3;
		}
		Triangl(point p1, point p2, point p3)
		{
			if (p1.x!=p2.x || p1.x!=p3.x || p2.x!=p3.x || p1.y != p2.y || p1.y != p3.y || p2.y != p3.y)
			{
				this->p1 = p1; this->p2 = p2; this->p3 = p3;
			}
			else 
			{
				p1; p2; p3;
			}
		}
	~Triangl() 
	{
		p1; p2; p3;
	};
	
	point get_p1() const { return p1; };
	point get_p2() const { return p2; };
	point get_p3() const { return p3; };
	//тип
	void tipeTriangl();

	//перимтр
	double P() const
	{
		return p1.distance_to(p2) + p2.distance_to(p3) + p3.distance_to(p1);
	};
	//площадь
	double S() const;

	//радиус вписанной окр
	double Rv() const;
	//радиус опис окр
	double Ro() const;

};




// Функция вывода точки на консоль.
void print(point p);

point get_point();