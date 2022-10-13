#include <iostream>
#include <exception>
using namespace std;

class Person {
public:
	string name;
	int age;
	string address;
public:
	Person(string _name, string _address, int _age) : 
		age(_age), address(_address), name(_name) {
	}
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	int getAge() {
		return age;
	}
};
class Student : public Person {
private:
	int ID;
public:
	int getID() {
		return ID;
	}
	Student(string _name, string _address, int _age, int _ID) :
		Person(_name, _address, _age) {
		this->ID = _ID;
	}
	void show() {
		cout << "Studnet Information" << '\n';
		cout << "Name : " << getName() << '\n';
		cout << "Age : " << getAge() << '\n';
		cout << "Address : " << getAddress() << '\n';
		cout << "Student ID : " << getID() << '\n';
	}
};
int main() {
	Student st("¼Û¹Î°æ", "daejeon", 10, 202102654);
	st.show();
	return 0;
}