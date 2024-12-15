#include<iostream>
using namespace std;
// STAIC MEMBER, STATIC METHODS, STATIC LOCAL VARIABLE
class Users {
	private:
//		Static Member		
		static int total_number_of_users;
	public:
//		Static Function/Method
		static int get_total_number_of_users() {
			return total_number_of_users;
		}
		
};
// Initializing Static Members
int Users::total_number_of_users = 50;


int number_of_times_function_called() {
//	Static Local Variable
	static int count;
	count += 1;
	return count;
}
int main() {
//	Calling Static Method
	cout << Users::get_total_number_of_users() << endl;
	
	cout << "Function gets called " << number_of_times_function_called()  << " times" << endl;
	cout << "Function gets called " << number_of_times_function_called()  << " times" << endl;
	cout << "Function gets called " << number_of_times_function_called()  << " times" << endl;
	return 0;
}

