/*

function calls have a certain amount of overhead

inline int add_numbers (int a, int b) { // defination
	return a + b;
}

int main () {
	int res;
	res = add_numbers (100, 200); // call
	return 0;
}

=====================
For small functions C++ compiler treats them as an inline code anyways.
*/