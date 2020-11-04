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

// Assume each country has at least 1 city
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

    // Unformatted display so you can see how to access the vector elements
    // cout << tours.title << endl;
    // for(auto country : tours.countries) {   // loop through the countries
    //     cout << country.name << endl;
    //     for(auto city : country.cities) {       // loop through the cities for each country
    //         cout << "\t" << city.name 
    //                       << "\t" << city.population 
    //                       << "\t" << city.cost 
    //                       << endl;
    //     }
    // }

    // cout << endl << endl;
    cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
    cout << setw(35);
    for (int i = 0; i < tours.title.size() / 2; i++) {
    	cout << tours.title[i];
    }

    // for (int i = tours.title.size() / 2; i < tours.title.size(); i++) {
    // 	cout << tours.title[i];
    // }
    return 0;
}