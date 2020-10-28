/*

A function should have
- name
- parameter list
- return type
- body

==========================================================
int function_name (parameter) {
	statements (s);
	return 0; // return value
}
==========================================================
int function_name (double a) {
	statements;
	return [something]; // return some integer value;
}
==========================================================
void function_name (string str) {
	statenents;
	cout << str;
	return; // not nessasary
}
==========================================================
void say_hello () {
	cout << "Hello" << endl;
}

int main () {
	say_hello ();
	return 0;
}
==========================================================

*/

#include <iostream>

using namespace std;

const double pi = 3.14;

double calc_area_circ (double rad) {
	return pi * rad * rad;
}

void area_circle () {	
	double rad;
	cin >> rad;
	cout << calc_area_circ (rad);
}

double calc_vol_cyl (double rad, double height) {
	return calc_area_circ (rad) * height;
}

void volume_cyl () {
	double rad, height; 
	cin >> rad >> height;
	cout << calc_vol_cyl (rad, height);
}


int main () {
	ios_base::sync_with_stdio (false);

	area_circle ();
	volume_cyl ();

	return 0;	
}