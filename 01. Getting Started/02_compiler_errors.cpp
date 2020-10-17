/*

Syntax Errors - Something wrong with thte structure
cout << "This will be and error << endl;

Semantic Errors - Something wrong with meaning
int main() 
	return "Hello"; // should return and integer value for int main ();

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	// cout << "Hello << endl;
	int a, b;
	a
	 + b;

	cout << a + b;
	return "0";	
}