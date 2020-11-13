/*

std::priority_queue
#include <queue>

Allows insertions and removal of elements in order from the front of the container

Elements are stored internally as a vector by default

Elements are inserted in priority order
(Largest value will always be at the front)

No iterators are supported

push - insert an element into sorted order
pop - removes the top element (greatest)

top - access the top element (Greatest)

empty
size


*/

#include <iostream>
#include <queue>

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
        // return this->name < rhs.name;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

ostream &operator<<(ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template<typename T>
void display(priority_queue<T> pq) {
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}

void breaker() {
	cout << "\n===========================================\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);

	{
		priority_queue<int> pq;

		for(int i : {3,5,7,12,23,12,4,100,0, 3,5,7})
			pq.push(i);
		display(pq);

		cout << "Size: " << pq.size() << endl;
		cout << "Top: " << pq.top() << endl;

		pq.pop();
		display(pq);
	}

	breaker();

	{
		priority_queue<Person> pq;
		pq.push(Person{"A", 10});
		pq.push(Person{"B", 1});
	    pq.push(Person{"C", 14});
	    pq.push(Person{"D", 18});  
	    pq.push(Person{"E", 7});  
	    pq.push(Person{"F", 27});

	    display(pq);
	}
	
	return 0;	
}