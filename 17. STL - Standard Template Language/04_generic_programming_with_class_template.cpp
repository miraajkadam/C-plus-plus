/*

- Similar to function template, but at the calss level
- allows plugging in any data type
- compuler generates the appropriate class from the blueprint

*/

#include <iostream>
#include <string>
#include <vector>

// using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::ios_base;
using std::vector;

template <typename T>
class Item {
	string name;
	T value;
public:
	Item(string name, T value) : name{name}, value{value} {}
	string get_name() const { return name; }
	T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_pair {
	T1 first;
	T2 second;
};

int main () {
	ios_base::sync_with_stdio (false);

	Item <int> item1 {"Frank", 100};
	cout << item1.get_name() << " " << item1.get_value() << endl;

	Item <string> item2 {"Miraaj", "Kadam"};
	cout << item2.get_name() << " " << item2.get_value() << endl;

	Item <Item<string>> item3{"Miraaj", {"C++", "Learner"}};
	cout << item3.get_name() << " " 
		 << item3.get_value().get_name() << " "
		 << item3.get_value().get_value() << endl;


	vector<Item<double>> I1;
	I1.push_back(Item<double> {"Miraaj", 100.002});
	I1.push_back(Item<double> {"Rupesh", 102.002});
	I1.push_back(Item<double> {"Paras", 103.002});
	I1.push_back(Item<double> {"Digen", 104.002});

	for (auto i : I1) {
		cout << i.get_name() << " " << i.get_value() << endl;
	}

	My_pair<string, int> p1 {"Miraaj", 100};
	cout << p1.first << endl;
	cout << p1.second << endl;	

	return 0;	
}