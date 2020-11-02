/*

- Constructor allocates storage dynamically and initiallizes the pointer
- Destructor release the memory allocated by the constructor

Shallow Copy - Defult behaviour provided by the constructor
- The pointer is copied NOT what it points to.
- When we release the storage in the destructor, the other object still refers to the released storage!


Class Shallow {
	int *data;
public:
	Sharrlow(int d);
	Shallow(const Shallow &source);
	~Shallow();
}

Shallow :: Shallow(int d) {
	data = new int;
	*data = d;
}

Shallow :: ~Shallow() {
	delete data;
	cout << "Destructor freeding data" << endl;
}

Shallow :: Shallow(const Shallow &source) : data(source.data) {
	cout << "Copy constructor - shallow" << endl;
}

int main () {
	Shallow obj1 {100};
	display_shallow(obj1);
	obj1.set_data_value(1000);
	Shallow obj2 {obj1};
	cout << "Hello World" << endl;
	return 0;
}

*/

#include <iostream>

using namespace std;

class Shallow {
	int *data;
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	Shallow(int d);
	Shallow(const Shallow &source);
	~Shallow();
};

Shallow :: Shallow(int d) {
	data = new int;
	*data = d;
}

Shallow :: Shallow(const Shallow &source) : data(source.data) {
	cout << "Copy constructor - shallow" << endl;
}

Shallow :: ~Shallow() {
	delete data;
	cout << "Destructor freeding data" << endl;
}

void display_shallow(Shallow s) {
	cout << s.get_data_value() << endl;
}

int main () { // This program will CRASH!
	ios_base::sync_with_stdio (false);
	
	Shallow obj1 {100};
	display_shallow(obj1);

	Shallow obj2 {obj1};
	obj2.set_data_value(1000);

	return 0;
}