#include<iostream>
#include<conio.h>
using namespace std;

// CONSTRUCTOR (NORMAL, PARAMETRIZED), THIS KEYWORD, CONSTRUCTOR OVERLOADING
class Student {
	private:
		string name;
		int age;
	public:
//	Normal Constructor		
	Student() {
		cout << "Student gets created ...";
	}
//	Parameterized Constructor
	Student(string name, int age) {
//		This Keyword
		this->name = name;
		this->age = age;
	}
//	^ 
//	!---> Constructor Overloading
	void showData() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age;
	}
};
int main() {
	Student s1("saim", 33);
	s1.showData();
	return 0;
}
