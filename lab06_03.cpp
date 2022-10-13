#include <iostream>
#include <exception>
using namespace std;

class A {
public: 
	string msg = "Catch 10";
public:
	A() {
		std::cout << "Constructor()" << std::endl;
	}
	~A() {
		std::cout << "Destructor( )" << std::endl;
	}
};

int main() {
	try {
		A a = A();
		throw a.msg;
	}
	catch(string m) {
		std::cout << m <<  std::endl;
	}
	return 0;
}