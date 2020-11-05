#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
    string name;
    long population;
    double cost;
};

struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

int main() {
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
    cout << endl;
    cout << setw(22);
    for (int i = 0; i < tours.title.size(); i++) {
    	cout << tours.title[i];
    }
    cout << endl << endl;
    cout << left << setw(20) << "Country" << setw(20) << "City" << right  << setw(15) << "Population" << setw(15) << "Price" << endl;
    cout << setfill('-') << setw(70) << '-' << endl;

    cout << fixed << setprecision(2) << showpoint;
    cout << setfill(' ');

    for (int i = 0; i < tours.countries.size(); i++) {
    	cout << setw(20) << left << tours.countries[i].name;
    	for (int j = 0; j < tours.countries[i].cities.size(); j++) {
    		if (j == 0) {
    			cout << setw(25) << left << tours.countries[i].cities[j].name;
    			cout << setw(10) << setfill(' ') << right <<  tours.countries[i].cities[j].population;
    			cout << setw(15) << setfill(' ') << right << tours.countries[i].cities[j].cost;
    			cout << endl;
    		}
			else {
				cout << setw(20) << " " << setfill(' ') << setw(25) << left << tours.countries[i].cities[j].name;
				cout << setw(10) << setfill(' ') << right <<  tours.countries[i].cities[j].population;
    			cout << setw(15) << setfill(' ') << right << tours.countries[i].cities[j].cost;
    			cout << endl;
			}
    	}
    }
    
    return 0;
}