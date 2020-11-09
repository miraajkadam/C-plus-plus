/*

template?
- Blueprint
- function and class template
- Allow plugging in any data type
- compiler generates the appropriate functions/class from the blueprint
- generic programming / meta-programming

*/

#include <iostream>
#include <string>

// using namespace std;

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::ios_base;

template <typename T>
T min(T a, T b) {
	return ((a < b) ? a : b);
}

template <typename T1, typename T2> 
void func(T1 a, T2 b) {
	cout << a << " " << b << endl;
}

template <typename T1, typename T2>
void swap(T1 &a, T2 &b) {
	T1 temp = a;
	a = b;
	b = temp;
}

struct Person {
	string name;
	int age;
	bool operator<(const Person &rhs) const {
		return this->age < rhs.age;
	}
};

ostream &operator<<(ostream &os, const Person &p) {
	os << p.name;
	return os;
}
int main () {
	ios_base::sync_with_stdio (false);

	cout << min <int> (2, 3) << endl; // 2
	cout << min(3, 2) << endl; // 2
	cout << min(3, 3) << endl; // 3
	cout << min('A', 'B') << endl; // 'A'
	cout << min(1.23, 1.22) << endl; // 1.22
	cout << min(1+2+3, 2+3+4*1) << endl; // 6

	Person p1 {"Moe", 21};
	Person p2 {"Curly", 15};

	Person p3 = min(p1, p2);
	cout << p3.name << " is younger" << endl; // Curly

	cout << endl << endl;
	func<int, int> (1, 2);
	func(3, 2);
	func('A', 1.23);
	func(1+2*3, 3+'A');

	func(p1, p2);

	int x = 10, y = 20;
	cout << x << " " << y << endl;
	swap(x, y);
	cout << x << " " << y << endl;

	string s1 = "Miraaj", s2 = "Kadam";
	cout << s1 << " " << s2 << endl;
	swap(s1, s2);
	cout << s1 << " " << s2 << endl;
	

	return 0;	
}