/*

To detect if a linked list has a loop, you can use Floyd's Cycle-Finding
Algorithm (also known as the Tortoise and Hare Algorithm). This algorithm
is efficient and uses two pointers, one moving one step at a time and the
other moving two steps at a time. If there is a loop, these pointers will
eventually meet; if there is no loop, the fast pointer will reach the
end of the list.


Example in C++ folder -> detectLoop.cpp
*/