/*

lvalues
- values that have names and are addressable
- modifiable if they are not constants
int x {100}; // x is an lvalue
x = 1000;
x = 1000 + 20;
string name // name is an lvalue

100 = x // 100 is not lvalue
(100 + 20) = x // not an lvalue


==============================================================================
rvalues
- anything thats not lvalue are rvalue
- on the right hand sideof an assignment expression
- a literal
- can be assigned to lvalues explicitly

==============================================================================
int x {100}; // 100 is rvalue.

x = 1000 + 20; // 1000 + 20 is rvalue
x = (x + y); // (x + y) is rvalue

int x {100};
int &refl = x; // refl is reference to lvalue
ref1 = 1000;

int &ref2 = 100; // ERROR 100 is an rvalue

==============================================================================
int square (int &n) {
	return n * n;
}

int num {10};
square (num); // OK
square (5); // ERROR - can't reference r values

*/