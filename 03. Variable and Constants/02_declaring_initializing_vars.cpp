/*
VariableType VariableName;

int age;
double rate;
string name;

Account James_s;
Name sam;


Legal		|	Illegal
age			|	int
int			|	$age
age2014		|	2014age
my_age		|	My Age

camelCase - miraajKadam, helloWorld, smallNum, firstNum
snake_case - miraaj_kadam, hello_world, big_num
hyphen-case - miraaj-kadam, num-sum

Declaring and initializing
int age; // uninitialized
int age = 21; // C-like initialization
int age (21); // Constructor initialization
int age {21}; c++11 list initialization syntax
*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int a {21};
	cout << a << endl;

	int room_width {0};
	cout << "Enter the width of the room:: ";
	cin >> room_width;

	int room_length {0};
	cout << "Enter the width of the room:: ";
	cin >> room_length;
 
	cout << "The are of the room is " << room_width * room_length << " sq feet";

	return 0;	
}