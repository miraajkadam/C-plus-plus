#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	const int small_room {25}, large_room {35}, estimates {30};
	const float sales_tax {0.06};

	int large, small;
	cout << "Enter the number of small rooms and large rooms you would like to be cleaned:: ";
	cin >> small >> large;

	cout << endl << "============================================" << endl 
	<< "Extimate for carpet cleaning service" << endl
	<< "============================================";

	cout << endl << "Number of small rooms: " << small;
	cout << endl << "Number of large rooms: " << large;
	cout << endl << "Price per small room: $" << small_room;
	cout << endl << "Price per large room: $" << large_room;

	cout << endl << "Cost: $" << (small_room * small) + (large_room * large);
	cout << endl << "Tax: $" << ((small_room * small) + (large_room * large)) * sales_tax;
	cout << endl << "=============================================";
	cout << endl << "Total estimate: $" << ((small_room * small) + (large_room * large)) + (((small_room * small) + (large_room * large)) * sales_tax);
	cout << endl << "This estime is Valid for 30 days";

	return 0;	
}