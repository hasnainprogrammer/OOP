#include<iostream>
using namespace std;
// ACCESS MODIFIERS/SPECIFIERS, FRIEND FUNCTION
class Teacher {
//	Private
	private:
		bool can_add_department = false;
//	Protected
	protected:
		bool can_take_attendence = true;
		bool can_change_marks = true;
//	Public
	public:
		void teacher_details() {
			cout << "Showing teacher details..." << endl;
		}
		
	friend void head_of_department(Teacher t);
};
class Ahmad: public Teacher {
	public:
		void show_details() {
			cout << "Name of the teacher is Ahmad..." << endl;
		}	
}; 

void head_of_department(Teacher t) {
		t.can_add_department = true;
		if (t.can_add_department) {
			cout << "Adding a new department..." << endl;	
		}
		
	}

int main() {
	Ahmad a;
	a.teacher_details();
	a.show_details();
	head_of_department(a);
	
	return 0;
}
