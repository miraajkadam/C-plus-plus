/*

Using only Stack // my solution

*/

#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

void display(stack<char> stk) {
	while(!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}
}

bool is_palindrome(string s) {
	string st;
	for (auto i : s)	 
		if (isalpha(i))
			st += toupper(i);

	int size = st.size();
	if (size == 1)
		return true;
	else if(size == 2 || size == 3) {
		if (*st.begin() == *(st.end() - 1))
			return true;
		else
			return false;
	}
	else {
		int mid = st.size() / 2;
		stack<char> stk;
		bool flag = true;
		for (int i = 0; i < mid; i++) {
			stk.push(st[i]);
		}
		// cout << st << " ";
		// display(stk);
		if (size % 2 == 0) {
			for (int i = mid; i < st.size(); i++) {
				if (st[i] != stk.top())
					flag = false;
				stk.pop();
			}
			return flag;
		}
		else {
			for (int i = mid + 1; i < st.size(); i++) {
				if (st[i] != stk.top())
					flag = false;
				stk.pop();
			}
			return flag;
		}
	}
	// cout << endl;
	return false;
}

int main() {
    vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const auto& s : test_strings) {
        cout << setw(8) << left << is_palindrome(s)  << s << endl;
    }

    // for (auto i : test_strings)
    // 	is_palindrome(i);

    return 0;
}