#include<iostream>
using namespace std;
class Wordpress {
	public:
//		Pure Virtual Function
		virtual void add_plugin() = 0;
};

// Elementor Plugin
class Elementor : public Wordpress {
	public:
		void add_plugin() {
			cout << "Elementor Plugin has been added successfully." << endl;
		}
};

// Astra Plugin
class Astra: public Wordpress {
	public:
		void add_plugin() {
			cout << "Astra Plugin has been added successfull." << endl;
		}
};

// Select a Plugin
Wordpress * get_plugin() {
	string plugin_name = "astra";
	if (plugin_name == "elementor") {
		return new Elementor();
	}
	if (plugin_name == "astra") {
		return new Astra();
	}
}
int main() {
	Wordpress *p;
	p = get_plugin();
	p->add_plugin();
	
	return 0;
}

