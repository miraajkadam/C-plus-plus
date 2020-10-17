/*
Data Types implenented directly by the C++ language

(2^n)

char -> 1 byte - 8 bits
char16_t -> at least 16 bits
char32_t -> at least 32 bits
wchar_t -> largest available character set

Integer Data Types
singned - unsigned

by default integers are signed - 1 bit for sign +/-

Floting point
Represented by mantissa and exponenet 

Boolean Type
bool - 8bits
zero - false
1 - true
*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	// char type
	char middle_initial {'S'}; // ' ' -> char " " -> string
	cout << middle_initial << endl;

	unsigned short int exam_score {55};
	cout << exam_score << endl;

	int countries {65};
	cout << countries << endl;

	long people_here {1232131233};
	cout << people_here << endl;

	long long people_on_earth {7'600'000'000}; // overflow and list initialization will catch those errors.
	cout << people_on_earth << endl;

	long people_on = 7'600'000'000; // overflow with no errors
	cout << people_on << endl;

	float car_payment {401.233};
	cout << car_payment;

	double pi {3.1415};
	cout << pi << endl;

	long double long_double {2.7e120};
	cout << long_double << endl;

	bool game_over {true};
	cout << game_over << endl;
	
	return 0;	
}