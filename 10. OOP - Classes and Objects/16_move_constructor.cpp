/*

int total {0};
total = 100 + 200;
100 + 200 in evaluated and 300 stored in unnamed temp value

Copy elision - C++ may optimize copying away completely (RVO - Return value optimization)

rvalue references
- used in moveing semantics and perfect forwarding
- move  semantics is all about rvalues references
- used by move constructor and move assignment operator to effifiently move and object rather than copt it
- rvalue reference operator (&&)

int x {100}
int &l_ref = x; // l value reference
l_ref = 10; // change x to 10

int &&r_ref = 200; // rvalue ref
r_ref = 300; // change r_ref to 300

int &&x_ref = x; // compiler error

Type::Type(Type &&source);
Player::PLayer(Player &&source);
Move::Move(Move &&source);

*/