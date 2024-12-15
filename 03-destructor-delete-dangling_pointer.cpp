#include<iostream>
#include<conio.h>
using namespace std;

// DESTRUCTOR, DELETE KEYWORD, DANGLING POINTER
class Student {
	private:
		char name[30];
		int age;
	public:
		Student() {
			cout << "Student gets created ..." << endl;
		}
//		Destructor
		~Student() {
			cout << "Student Object get's Destroyed" << endl;
		}
	
};
int main() {
	Student *p;
	p = new Student();
//	Delete Keyword
	delete p;
//	Dangling Pointer
	cout << "Dangling Pointer Garbage Value: " << p << endl;
//	dangling pointer should be set to null
	p = NULL;
	cout << "Dangling pointer now points to: " << p;
	return 0;
	

}
