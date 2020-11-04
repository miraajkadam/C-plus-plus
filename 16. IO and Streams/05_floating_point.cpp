/*

- setprecision
- fixed (fixing specific number of digits after decimal point)
- noshowpoint - trailing zeros (by default not displayed)
- nouppercase
- noshowpos

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	double num {123456789.987654321};
	cout << num << endl; 

	cout << setprecision(9) << num << endl; // 1234567890

	cout << fixed << num << endl;

	cout << setprecision(3) << fixed << num << endl;
	cout << fixed << setprecision(3) << num << endl;

	cout << setprecision(3) << scientific << num << endl;

	cout << setprecision(9) << fixed << showpos << num << endl;

	cout << resetiosflags(ios::fixed);
	cout << resetiosflags(ios::scientific);
	cout << resetiosflags(ios::showpos);
	cout << setprecision(6); // 6 is the default

	cout << num << endl;

	cout << fixed << 1.1 << endl; // trailing 0s

	cout << showpoint << (double) 1.1 << endl;

	return 0;	
}