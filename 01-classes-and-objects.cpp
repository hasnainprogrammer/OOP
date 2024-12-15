#include<iostream>
#include<conio.h>
using namespace std;

// CLASSES AND OBJECTS
// Class
class Student {
	private:
		char name[30];
		int age;
	public:
		void getData() {
			cout << "Enter the student name: ";
			cin >> name;
			cout << "Enter the student age: ";
			cin >> age;
		}
		void showData() {
			cout << "Name of the student is: " << name << endl;
			cout << "Age of the student is: " << age;
		}
};
int main() {
//	Object/Instance
//	Student s1;
//	s1.getData();
//	s1.showData();
	
//	Reference Variable / Pointer Object
	Student *p;
	p = new Student();
	(*p).getData(); 
	p->showData(); // syntactic sugar
	return 0;
}
