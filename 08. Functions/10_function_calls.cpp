/*

functiosn us the function call stack
- LIFO - Last in First Out
- Push and pop

Stack fram or activation record
- Fucntion must return control to function that called it.
- whena function terminates we pop the activation record and return.
- Local variables and function parameters are allocated on the stack

Stack size is finite - The error going overbounds is Stack Overflow!

|-------------------------------|
|								|
|								|
|								|
|								|	
|			 HEAP				|
|								|	
|								|	
|								|	
|								|
|-------------------------------|
|								|
|								|
|	    	 stack             	|
|								|
|								|
|-------------------------------|
|								|
|		Static Variables 		|
|								|
|-------------------------------|
|								|
|								|
|								|
|			Code Area			|
|								|
|								|
|								|
|-------------------------------|

*/

#include <iostream>

using namespace std;

void func2 (int &x, int y, int z) {
	x += y + z;
}

int func1 (int a, int b) {
	int res;
	res = a + b;
	func2 (res, a, b);
	return res;
}

int main () {
	ios_base::sync_with_stdio (false);

	int x = 10, y = 20, z;
	z = func1 (x, y);
	cout << z;

	return 0;	
}