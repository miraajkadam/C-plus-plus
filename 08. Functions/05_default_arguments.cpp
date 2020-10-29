/*

Add them in function prototype <-- Best practice

double calc_cost (double base_cost, double tax_rate = 0.06);

double calc_cost (double base_cost, double tax_rate) {
	return base_cost += base_cost * tax_rate;
}

int main () {
	double cost {0};
	cost = calc_cost (200.0); // Calculated with the default param
	cost = calc_cost (200.0, 0.08); // Calculated with the actual param
}

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.50);

void greeting (string name, string prefix = "Mr. ", string suffix = "");

double calc_cost (double base_cost, double tax_rate, double shipping) {
	return base_cost += base_cost * tax_rate + shipping;
}

void greeting (string name, string prefix, string suffix) {
	cout << "Hello " << prefix + " " + name + " "+ suffix + " " << endl;
}

int main () {
	ios_base::sync_with_stdio (false);

	cout << fixed << setprecision(2);

	cout << calc_cost (100.0, 0.08, 4.25) << endl;
	cout << calc_cost (100.0, 0.08) << endl;
	cout << calc_cost (200.0) << endl;

	greeting ("Miraaj Kadam", "Mr.");
	greeting ("Sanjeev Kadam", "Dr.", "PH.D.");
	greeting ("Frank Miller","Mr.");

	return 0;	
}