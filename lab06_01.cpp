#include <iostream>
#include <exception>
using namespace std;

class A {
public:
	int k = 5;
};

int main() {
	A a;
	cout << a.k << endl; //초기값 출력
	a.k = a.k++; //후위연산
	cout << a.k << endl; //후위연산 결과 출력
	a.k = ++a.k; //전위연산
	cout << a.k << endl; //전위연산 결과 출력

	return 0;
}