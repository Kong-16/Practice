#include <iostream>
using namespace std;

#include"exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽�" << a.getBase << "����" << a.getExp();
}