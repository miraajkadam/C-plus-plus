/*

class DivideByZeroException {};
class NegativeValueException {};

*/

#include <iostream>

using namespace std;

class DivideByZeroException {

};

class NegativeValueException {

};

double calc (int km, int litre) {
	if (litre == 0) 
		throw DivideByZeroException();
	else if (litre < 0 || km < 0)
		throw NegativeValueException();
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
	
	catch (const DivideByZeroException &e) {
		cerr << "DivideByZeroException Occured" << endl;
	}	

	catch (const NegativeValueException &e) {
		cerr << "NegativeValueException Occured" << endl;
	}

	catch (...) {
		cerr << "Catch all executed" << endl;
	}

	cout << "Program finished" << endl;

	return 0;	
}