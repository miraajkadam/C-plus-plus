/*

- dec (base 10)
- noshowbase - prefix used to show hexadecial or octal
- nouppercase - when displaying a prefix and hex values it will be lower case
- noshowpos - no + is displayed for positive numbers
 
these manipulators affect all further output to the stream

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num = 255;
	
	cout << dec << num << endl; // 255
	cout << hex << num << endl; // ff
	cout << oct << num << endl; // 377

	cout << showbase; // noshowbase

	cout << dec << num << endl; // 255
	cout << hex << num << endl; // 0xff
	cout << oct << num << endl; // 0377

	cout << uppercase; // nouppercase

	cout << dec << num << endl; // 255
	cout << hex << num << endl; // 0XFF
	cout << oct << num << endl; // 0377

	cout << showpos; // noshowpos

	cout << dec << num << endl; // +255

	cout << resetiosflags(ios::basefield);
	cout << resetiosflags(ios::showbase);
	cout << resetiosflags(ios::showpos);
	cout << resetiosflags(ios::uppercase);

	cout << num << endl; // 255

	return 0;	
}