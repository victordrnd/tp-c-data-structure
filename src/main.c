#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "./utils/stack/stack.h"

float test()
{
	Stack s;
	init_stack(&s);
	assert(s.index == 0);
	push(&s, 4);
	assert(s.index == 1);
	assert(s.data[0] == 4);
	
	assert(peek(&s) == 4);
	pop(&s);
	assert(s.index == 0);

	push(&s, 4);
	push(&s, 14.3);
	clear(&s);
	assert(s.index == 0);
}

int main()
{
	test();

	return (0);
}