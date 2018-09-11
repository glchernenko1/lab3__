//
// ������������ ������ �4. ������. ���� � v�����
// point.h
//
#pragma once

// ����� ����� ��������� ������������ ����������,
// ������ ��� ���������� ���������� �������� ����������.
const double precision = 1E-10;



class point
{
private:
    double x, y;
public:    
    // ����������� � �����������.
	point(double x, double y) { this->x = x; this->y = y; };
    // ����������� �� ���������.
	point() { x = 0; y = 0; };
	~point() { x = 0; y = 0; };

	// ������� ������ ����� � �������.
	friend point get_point();
	friend class Triangl;
	

    // ������ ������� � �������� �����
	double get_x() const { return x; };
	double get_y() const { return y; };


    // ����� ������ ������, �� �������� ��������� ��� �����
    // ������ ����������� � �������� ������ const.
    // ��� ����������, ��� ������ ������ ����� ���������� 
    // ������������ ��������� ����� ������.

    // ����� ���������� ���������� �� ������ �����.
    // ������� ���������:
    //      target - ������� �����.
	double distance_to(point const & target) const;

    // ����� ����� ��� �������, ����������� ��������������,
    // ����� ����� ������ � �������� ����� � ������� ������.

    // ����������� �����.

    
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
	//���
	void tipeTriangl();

	//�������
	double P() const
	{
		return p1.distance_to(p2) + p2.distance_to(p3) + p3.distance_to(p1);
	};
	//�������
	double S() const;

	//������ ��������� ���
	double Rv() const;
	//������ ���� ���
	double Ro() const;

};




// ������� ������ ����� �� �������.
void print(point p);

point get_point();