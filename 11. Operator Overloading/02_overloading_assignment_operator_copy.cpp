/*

C++ provides a default assignment operator used for assigning one object to another
Defaults is memberwise assignment (shallow copu)
- if there is a raw pointer data member then there should be a deep copy

Type &Type :: operator=(const Type &rhs);

Mystring &Mystring :: operator= (const Mystring &rhs) {
	if (this == &rhs)
		return *this;
	
	delete [] str;
	str = new char [std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);

	return *this;
}

*/