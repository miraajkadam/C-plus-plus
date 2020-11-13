/*

std::queue
#include <queue>

First in first out (FIFO) data structure

Implemented as an adapter over other STL container
Can be implemented as a list or deque

Elements are pushed at the back and popped from the front

No iterators are supported

push
pop

front 
back

empty
size

std::queue<int> q; // uses deque
std::queue<int, std::list<int>> q; // uses list
std::queue<int, std::deque<int>> q; // uses deque

*/

#include <iostream>
#include <queue>

using namespace std;

template<typename T>
void display(queue<T> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

void breaker() {
	cout << "\n==================================================\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);

	queue<int> q;

	for (int i : {1, 2, 3, 4, 5, 6})
		q.push(i);

	display(q);
	cout << "Front: " << q.front() << endl;
	cout << "Back: " << q.back() << endl;

	breaker();
	
	q.pop();
	display(q);

	q.pop();
	q.pop();
	display(q);

	breaker();

	cout << q.size() << endl;
	while (!q.empty()) 
		q.pop();
	cout << q.size() << endl;

	breaker();

	q.push(10);
	q.push(100);
	q.push(1000);

	display(q);

	q.front() = 5;
	q.back() = 5000;

	display(q);

	return 0;	
}