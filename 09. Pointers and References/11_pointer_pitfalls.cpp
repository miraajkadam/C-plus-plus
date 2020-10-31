/*

- uninitialized pointers
- dangling pointers
- not checking new fails
- leaking memory

int *new_ptr; // pointing anywhere
*new_ptr = 100; // hopefully crash

*/