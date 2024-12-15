#include<iostream>
#include<conio.h>
using namespace std;
// INHERITANCE, INHERITANCE CATEGORIES, CONSTRUCTOR IN INHERITANCE
class Car {
	public:
		Car() {
			cout << "Car class constructor get's called" << endl;
		}
};
// Single Inheritance
class Toyota: public Car {
	private:
		string name;
		int no_of_seats;
	public:
		Toyota() {
		cout << "Toyota class constructor get's called" << endl;
	}
	//	Setter Function
	void setData(string name, int no_of_seats) {
		this->name = name;
		this->no_of_seats = no_of_seats;
	}
//		Getter Function
	void getData() {
		cout << "Name of the car is: " << name << endl;
		cout << "Number of seats in " << name << " is " << no_of_seats;
	}
		
};
// Multiple Inheritance
class ToyotaMini : public Car, public Toyota {
	public:
		ToyotaMini() {
			cout << "ToyotaMini class constructor get's called" << endl;
		}
};

// Constructor in Single Inheritance
class Base {
	public:
		Base() {
			cout << "Base class constructor" << endl;
		}
};
class Derived: public Base {
	public:
		Derived() {
			cout << "Derived class constructor" << endl;
		}
};

// Constructor in Single Inheritance with arguments
class Base2 {
	public:
		Base2(string name) {
			cout << name << " class constructor" << endl;
		}
};
class Derived2: public Base2 {
	public:
		Derived2(string name, string name2): Base2(name2) {
			cout << name << " class constructor" << endl;
		}
};

int main() {
//	Toyota t;
//	t.setData("Toyota", 4);
//	t.getData();
//	ToyotaMini tm;

	Derived2 d("Derived", "Base");
	
	return 0;
}
