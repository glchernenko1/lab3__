//
// ������������ ������ �4. ������. ���� � v�����
// main.cpp
//
#pragma once
#include <iostream>
#include "point.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    try {
        cout << "������� ���������� �����" << endl;
        point p1= get_point();
		point p2 = get_point();
		point p3 = get_point();
        print(p1);
		print(p2);
		print(p3);
		cout << p1.distance_to(p2) << endl;
		Triangl t(p1, p2, p3);
		t.tipeTriangl();
		
    }
    catch (domain_error e) {
        cout << e.what() << endl;
    }

    system("pause");
    return 0;
}