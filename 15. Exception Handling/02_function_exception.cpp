#include <iostream>

using namespace std;

double calc (int km, int litre) {
	if (litre == 0) 
		throw 0;
	return static_cast<double> (km) / litre; 
}

int main () {
	ios_base::sync_with_stdio (false);

	int km{}, litre{}; double mileage{};
	cin >> km >> litre;

	try {
		mileage = calc (km, litre);
		cout << mileage;	
	}
	catch (int &e) {
		cerr << "Divide by zero Detected" << endl;
	}	

	return 0;	
}