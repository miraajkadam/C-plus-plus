/*

Associative Containers
- Collections of stored objects that allow fast retrival using a key
- STL provides sets and maps
- Usually implemented as a balanced binary tree or hashsets
- Most operations are very ellifiend

SETS
	set::set
	set::unordered_set
	set::multiset
	set::unordered_multiset

MULTISET
	Sorted by key
	Allows duplicate elements
	All iterators are available

UNORDERED SET
	Elements are unordered
	No duplicate elements allowed
	Elements cannot be modified
		Must be erased and new element inserted
	No reverse iterators are allowed

UNORDERED MULTISET
	Elements are unordered
	Allows duplicate elements
	NO reverse iterators are allowed
*/

#include <iostream>
#include <set>

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
    os << p.name << ": " << p.age;
    return os;
}

template <typename T>
void display(set<T> s) {
	for(auto i : s) 
		cout << i << " ";
	cout << endl;
}

void breaker() {
	cout << "\n===============================================\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);

	{
		set<int> s1 {1, 4, 3, 2, 5, 4};
		display(s1);

		s1.insert(0);
		s1.insert(10);
		display(s1);

		if(s1.count(10))
			cout << "10 in the set" << endl;
		else
			cout << "10 not in the set" << endl;

		if(s1.count(9))
			cout << "9 in the set" << endl;
		else
			cout << "9 not in the set" << endl;

		auto it = s1.find(5);
		if (it != s1.end())
			cout << "Found " << *it << endl;

		s1.clear();
		cout << s1.size() << endl;
	}

	breaker();

	{
	    std::set<Person> stooges {
	        {"Larry", 1},
	        {"Moe", 2},
	        {"Curly", 3}
	    };
	    display(stooges);           // Note the order of display!  operator<

	    stooges.emplace("James", 50);   
	    display(stooges);

	    stooges.emplace("Frank", 50); // NO -- 50 already exists
	    display(stooges);
	    
	    auto it = stooges.find(Person{"Moe", 2});
	    if (it != stooges.end())
	        stooges.erase(it);
	    
	    display(stooges);
	    
	    it = stooges.find(Person("XXXX", 50));      // Will remove James!!!!
	                                                                     // uses operator<
	    if (it != stooges.end())
	        stooges.erase(it);
	    display(stooges); 

	}

	breaker();

	{
		set<string> s {"A", "B", "C"};
		display(s);

		auto res = s.insert("D");
		display(s);

		cout << boolalpha;

		cout << "First: " << *(res.first) << endl;
		cout << "Second: " << res.second << endl;

		res = s.insert("B");

		cout << "First: " << *(res.first) << endl;
		cout << "Second: " << res.second << endl;
	}

	return 0;	
}