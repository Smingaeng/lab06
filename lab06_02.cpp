#include <iostream>
#include <exception>
using namespace std;

class MyException : public std::exception {
private: 
	char* message;
public:
	const char* what() const noexcept override{
		return "NewException";
	}
};
int main() {
	try {
		throw MyException();
	}
	catch (std::exception& e) {
		std::cout << "My exception is "<< e.what() << std::endl;
	}
	return 0;
}