/*

- create a copy of the pointed to data
- Each copy will have a pointer to unique sotrage in the heap
- Deep copy when you have raw C++ pointers

class Deep {
	int *data; // Pointer
public:
	Deep (int d); // Constructor
	Deep (const Deep &source); // Copy Constructor
	~Deep (); // Destructor
}

Deep::Deep (int d) {
	data = new int;
	*data = d;
}

Deep:~Deep () {
	delete data; // deleting space
	cout << "Destructor freedata" << endl
}

Deep::Deep (const Deep &source) {
	data = new int; // allocate storage
	*data = *source.data;
	cout << "Copy Constructor - deep" << endl;
}

Deep::Deep (const Deep &source) : Deep {*source.data} {
	cout << "Copy Constructor - deep" << endl;
}

void display_deep (Deep s) {
	cout << s.get_data_value() << endl;
}


int main () {
	Deep obj1 {100};
	display_deep (obj1);

	obj1.set_data_value(1000);
	Deep obj2 {obj1};

	return 0;
}

*/

#include <iostream>

using namespace std;

class Deep {
	int *data; // Pointer
public:
	Deep (int d); // Constructor
	Deep (const Deep &source); // Copy Constructor
	~Deep (); // Destructor
};

Deep::Deep (int d) {
	data = new int;
	*data = d;
}

Deep::~Deep () {
	delete data; // deleting space
	cout << "Destructor freedata" << endl;
}

Deep::Deep (const Deep &source) {
	data = new int; // allocate storage
	*data = *source.data;
	cout << "Copy Constructor - deep" << endl;
}

// Deep::Deep (const Deep &source) : Deep {*source.data} {
// 	cout << "Copy Constructor - deep" << endl;
// }

void display_deep (Deep s) {
	cout << s.get_data_value() << endl;
}


int main () {
	ios_base::sync_with_stdio (false);

	Deep obj1 {100};
	display_deep (obj1);

	obj1.set_data_value(1000);
	Deep obj2 {obj1};

	return 0;
}