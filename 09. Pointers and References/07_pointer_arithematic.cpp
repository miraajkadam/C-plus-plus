/*

pointers can be used in 
- assignment expressions
- assignment expressions
- Comparison expressions

C++ allows pointer arithmetic

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int ar[] {121, 233, 332};
	cout << boolalpha;
	cout << (*(ar + 1) == ar[1]) << endl; // true

	int *sc_ptr = ar;
	cout << *sc_ptr << endl; // 121
	(*sc_ptr)++;
	cout << *sc_ptr << endl; // 122

	*sc_ptr++; // <-- right to left associativity

	cout << *sc_ptr << endl; // 233;

	char  name[] = "Miraaj";
	char *chp = name;

	cout << chp << endl; // Miraaj
	cout << *chp << endl; // M
	cout << (char) (*chp + 1) << endl; // N
	cout << *(chp + 1) << endl; // i


	return 0;	
}