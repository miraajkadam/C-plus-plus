/*

do {
	statement;
} while (expression);

will execute atleast once!

*/

 #include <iostream>
 
 using namespace std;
 
 int main () {
 	ios_base::sync_with_stdio (false);
 
 	char ch {};
 	do {
 		cout << "1. Option 1" << endl;
 		cout << "2. Option 2" << endl;
 		cout << "3. Option 3" << endl;
 		cout << "4. Q / q" << endl;
 		cin >> ch;
 	} while (ch != 'q' || ch != 'Q');
 
 	return 0;	
 }