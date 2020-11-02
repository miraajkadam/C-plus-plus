/*

- struct comes from the C programming language
- struct members are public by default
- class members are private by default

class Person {
	string name;
	string get_name();
}

main () {
	Person p;
	p.name = "Frank"; // Compiler error - private
	cout << p.get_name(); // Compiler error - private
}

struct Person {
	string name;
	string get_name(); // Why if name is public?
};

Person p;
p.name = "Frank"; // OK - Public
cout << p.get_name(); // OK - Public

Struct 
- use struct for passive objects with public access
- Don't declare methods in structs

Class
- Use class for active objects with private access
- implement getters/setters as needed
- implement members methods as needed
*/