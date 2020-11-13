/*

MAPS
	std::map
	std::unordered_map
	std::multimap
	std::unordered_multimap

MAP
	similar to a dictionary
	elements are stored as key, value paris (std::pair)
	ordered by key
	no duplicate elements
	direct element access using the key
	all iterators available and invalidate when corresponding element is deleted

MULTI MAP
	ordered by key
	allows duplicate elements
	allo iterators are available

UNORDERED MAP
	elements are unordered
	no duplicate elements allowed
	no reverse iterators are allowed

UNORDERED MULTIMAP
	elements are unordered
	allows duplicate elements
	no reverse iterators are allowed
*/

#include <iostream>
#include <map>
#include <set>

using namespace std;

void display(const map<string, set<int>> &m) {
    cout << "[ ";
    for (const auto &elem: m) {
        cout << elem.first << ": [ " ;
            for (const auto &set_elem : elem.second)
                 cout << set_elem <<  " ";
            cout << "] " ;
    }
    cout << "]  " << endl;
}

template <typename T1, typename T2>
void display(const map<T1, T2> &l) {
    cout << "[ ";
    for (const auto &elem: l) {
        cout << elem.first << ":" << elem.second << " ";
    }
    cout << "]  " << endl;
}

void breaker() {
	cout << "\n========================================================\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	{
		map<string, int> m {
			{"Larry", 3},
			{"Moe", 1},
			{"Curly", 2},
		};

		display(m);

		m.insert(pair<string, int> ("Anna", 10));
		display(m);

		m.insert(make_pair("Joe", 5));
		display(m);

		m["Frank"] = 19;
		display(m);

		m["Frank"] += 20;
		display(m);

		m["Miraaj"] = 20;
		display(m);

		m["Miraaj"] -= 20;
		display(m);

		m.erase("Frank");
		display(m);

		cout << "Count for Joe: " << m.count("Joe") << endl;
		cout << "Count for Frank: " << m.count("Frank") << endl;

		auto it = m.find("Miraaj");
		if (it != m.end())
			cout << it->first << ": " << it->second << endl;
	}

	breaker();

	{
		map<string, set<int>> grades  {
	        {"Larry", {100, 90} },
	        {"Moe",  {94} },
	        {"Curly", {80, 90, 100} }
	    };
	    
	    display(grades);
	    
	    grades["Larry"].insert(95);

	    display(grades);
	    
	    auto it = grades.find("Moe");
	    if (it != grades.end()) {
	            it->second.insert(1000);
	    }
	    display(grades);
	}

	return 0;	
}