/*

sequence containers
Non-contiguous in memory
No direct access to elements
Very efficient for inserting and deleting elements once an element is found

LIST
#include <list>

std::list<int> l {1, 2, 3};

- Dynamic Size
-- list of elements
-- list is directional (doubly linked)

- Direct element access is NOT provided
- Rapid insertion and deletion of elements anywhere in the container (constant time)
- All iterators available and invalidate when corresponding element is deleted.

FORWARD LIST
#include <forward_list>

std::forward_list<int> l {1, 2, 3};

- Dynamic Size
-- lists of elements
-- list uni-directional (singly linked)
-- less overhead than a std::list

- Direct element access is NOT provided

- Rapid insertion and deletion of elements anywhere in the container (constant time)
- Reverse iterators are not availaible. Iterators invalidate when corresponding element is deleted.

*/

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class Person {
    friend ostream &operator<<(ostream &os, const Person &p);
    string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(string name, int age) 
        : name{name}, age{age}  {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

ostream &operator<<(ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(list<T> l) {
	for(auto i : l) 
		cout << i << " ";
	cout << endl;
}

void breaker() {
	cout << "\n===============================================\n\n";
}

int main () {
	ios_base::sync_with_stdio (false);

	{
		list<int> l1 {1, 2, 3, 4, 5};
		display(l1);

		list<string> l2;
		l2.push_back("BACK");
		l2.push_front("FRONT");
		display(l2);

		list<int> l3;
		l3 = {10, 20, 30, 40, 50, 60, 70};
		display(l3);

		list<int> l4 (10, 100);
		display(l4);
	}

	breaker();

	{
		list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
		display(l);

		cout << "Size: " << l.size() << endl;
		cout << "Front: " << l.front() << endl;
		cout << "Back: " << l.back() << endl;

		l.clear();
		cout << "Size: " << l.size() << endl;
	}

	breaker();

	{
		list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
		display(l);

		l.resize(5);
		display(l);

		l.resize(10);
		display(l);

		list<Person> persons;
		persons.resize(5);
		display(persons);
	}

	breaker();

	{
		list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		list<int>:: iterator it;
		display(l);
		it = find(l.begin(), l.end(), 5);
		if (it != l.end())
			l.insert(it, 100);
		display(l);

		list<int> l2 {1000, 2000, 3000};
		l.insert(it, l2.begin(), l2.end());
		display(l);

		advance(it, -4); // points to 100 earlier it was pointing to 5 // Move 4 index back in list
		cout << *it << endl;

		l.erase(it);
		display(l);
	}

	breaker();

	{
		list<Person>  stooges {
	        {"Larry", 18},
	        {"Moe", 25},
	        {"Curly", 17}
    	};
    
	    display(stooges);
	    
	    string name;
	    cout << "Enter the name of next stooge: ";
	    getline(cin, name);
	    int age;
	    cout << "Enter the age: ";
	    cin >> age;

	    stooges.emplace_back(name, age);
	    display(stooges);

	    auto it = find(stooges.begin(), stooges.end(), Person{"Moe", 25});
	    if (it != stooges.end())
	    	stooges.emplace(it, "Frank", 18);
	    display(stooges);
	}

	breaker();

	{
		list<Person>  stooges {
			        {"Larry", 18},
			        {"Moe", 25},
			        {"Curly", 17}
    	};
    	display(stooges);
    	stooges.sort();
    	display(stooges);
	}

	return 0;	
}