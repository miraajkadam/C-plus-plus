#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

void display(stack<char> stk) {
	while (!stk.empty()) {
		cout << stk.top();
		stk.pop();
	}
}
bool is_palindrome(const string& s) {
	string st {};
	for (const char i : s)
		if (isalpha(i))
			st += toupper(i);

	int mid = st.size() / 2;
	if(st.size() / 2 != 0)
		mid++;
	cout << st << " " << mid;
	cout <<endl;
}

int main() {
    vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    // cout << boolalpha;
    // cout << setw(8) << left << "Result" << "String" << endl;
    // for(const auto& s : test_strings) {
    //     cout << setw(8) << left << is_palindrome(s)  << s << endl;
    // }

    for (auto i : test_strings)
    	is_palindrome(i);

    return 0;
}