/*

Allows user defined types to begave similar to built-in types

Traditional Methods -->
Using functions:
Number result = multiply(add(a, b), divide(c, d));
Using member methods:
Number result = (a.add(b)).multiply(c.divide(d));

Using overloaded operators
Number result = (a + b) * (c / d)

Rules
- Precedence and Associativity cannot be changed.
- 'arity' cannot be changed (making division operator unary is not possible)
- can't overload operators for primitive type (int, double)
- can't create new operators
- [], (), ->, = must be declared as member methods

*/