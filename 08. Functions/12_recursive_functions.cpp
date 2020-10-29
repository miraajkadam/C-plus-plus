/*

functions calling itself.

Recursive problem solving - 
- Base Case
- Divide the rest of the proble into subproblem and do a recursive call

Mathematic - Factorial, Fibonnaci, Fractals etc...
Searching and Sorting - Binary search, search trees

==================================================================================
Factorial
- Base Case: factorial (0) = 1
- Recursive case: factorial (n) = n * factorial (n - 1)

unsigned long long factorial (unsigned long long n) {
	if (n == 0) // if this is not there then there will be a stack overflow error.
		return 1;
	return n * factorial (n - 1);
}

int main () {
	cout << factorial (8) << endl; // 40320
}

====================================================================================
Fibonnaci
unsigned long long fibb (unsigned long long n) {
	if (n <= 1) // base case
		return n;
	return fibb (n - 1) + fibb (n - 2); // (n > 1) <-- recursive case
} 

int main () {
	cout << fibb (30) << endl; // 832040
}
====================================================================================
- Anything that can be done with recursion can also be done with iteration
- If recursion doesn't stop will have infinite recursion
- base case terminates the recursion
- Infinite recursion will eventually lead to Stack Overflow error
 
*/

#include <iostream>

using namespace std;

unsigned long long int fibb (unsigned long long int n) {
	if (n <= 1)
		return n;
	return fibb (n - 1) + fibb (n - 2);
}

int main () {
	ios_base::sync_with_stdio (false);

	cout << fibb (5) << endl;
	cout << fibb (8) << endl;
	cout << fibb (30) << endl;
	cout << fibb (50) << endl;

	return 0;	
}