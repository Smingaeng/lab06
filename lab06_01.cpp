#include <iostream>
#include <exception>
using namespace std;

class A {
public:
	int k = 5;
};

int main() {
	A a;
	cout << a.k << endl; //�ʱⰪ ���
	a.k = a.k++; //��������
	cout << a.k << endl; //�������� ��� ���
	a.k = ++a.k; //��������
	cout << a.k << endl; //�������� ��� ���

	return 0;
}