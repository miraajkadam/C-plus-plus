/*

- this is a reserved keyword
- Containers the address of the object - so it's a pointer to the object
- Can only be used in class scope
- All member access is done via the this pointer

- Can be used by the programmer
-- To access data member and methods
-- To determin if two objects area the same 
-- can be dereferences (*this) to yeild the current object.  

void Account :: set_balance(double bal) {
	balance = bal;
}

void Account :: set_balance (double balance) {
	this->balance = balance;
}

*/