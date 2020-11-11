#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

bool is_palindrome(const std::string& s) {
    deque<char> d;
    for (auto i : s) {
    	if (isalpha(i))
    		d.push_back(tolower(i));
    }

    while (d.size() > 1) {
    	if (d.front() != d.back()) 
    		return false;
    	d.pop_front();
    	d.pop_back();    	
    }
    return true;
}

int main () {
	ios_base::sync_with_stdio (false);

	vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const auto& s : test_strings) {
        cout << setw(8) << left << 
        is_palindrome(s)
        << s << endl;
    }
    cout << endl;
    return 0;

	return 0;	
}