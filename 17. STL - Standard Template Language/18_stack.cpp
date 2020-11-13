/*

#include <stack>

std::stack

Last in first out (LIFO) Data structure
implemented as an adapter over other STL container Can be implemented as a vector list or deque
All operations occur on one end of the stack (top)
No iteratorsa re supported

push 
pop
top
empty
size

Underlying container - default = deque

std::stack<int> s; // uses deque
std::stack<int, std::vector<int>> s; // uses vector
std::stack<int, std::list<int>> s; // uses list
std::stack<int, std::deque<int>> s; // uses deque

*/

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

template<typename T>
void display(stack<T> stk) { // makes a new copy hence original stack is not getting changed
	while (!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;
}

void breaker() {
	cout << "\n=============================================\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);

	stack<int> s;
	stack<int, vector<int>> s1;
	stack<int, list<int>> s2;
	stack<int, deque<int>> s3;

	for (int i : {1, 2, 3, 4, 5}) 
		s.push(i);
	display(s);

	breaker();

	s.push(100);
	display(s);

	breaker();

	s.pop();
	display(s);

	breaker();

	s.pop();
	s.pop();
	display(s);

	breaker();

	cout << s.empty() << endl;

	while(!s.empty()) 
		s.pop();
	display(s);

	cout << s.empty() << endl;

	breaker();

	s.push(10);
	cout << s.top() << endl;
	display(s);

	s.top() = 100;
	cout << s.top() << endl;
	display(s);

	return 0;	
}