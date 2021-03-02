#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony	*ontheheap = new Pony("HeapPony");

	ontheheap->dance();
	delete ontheheap;
}

void	ponyOnTheStack() {
	Pony	onthestack("StackPony");

	onthestack.dance();
}

int	main() {
	ponyOnTheHeap();
	ponyOnTheStack();
}
