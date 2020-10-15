#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "./utils/stack/stack.h"
#include "./utils/queue/queue.h"
#include "./utils/array_list/array_list.h"
#include "./utils/heap/heap.h"

float test_stack()
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

void test_queue()
{
	Queue q;
	init_queue(&q);
	assert(q.index == 0);
	assert(is_queue_empty(&q) == true);
	enqueue(&q, 30.0);
	enqueue(&q, 20.0);
	assert(q.index == 2);
	assert(q.data[0] == 20);
	assert(q.data[1] == 30);
	//printf("%f\n", front(&q));
	assert(front(&q) == 30);
	assert(q.index == 2);
	assert(is_queue_empty(&q) == false);
	dequeue(&q);
	assert(q.index == 1);
	clearq(&q);
	assert(q.index == 0);
}

void test_arraylist()
{
	Array_list l;

	init_array_list(&l);
	assert(l.index == 0);

	add(&l, 45);
	assert(l.data[0] == 45);
	assert(l.index == 1);

	insert_at(&l, 99, 14);
	assert(l.index == 2);
	assert(l.data[1] == 14);

	insert_at(&l, 1, 9);
	assert(l.index == 3);
	assert(l.data[1] == 9);

	remove_at(&l, 1);
	assert(l.index == 2);
	assert(l.data[1] == 14);

	assert(get_at(&l, 1) == 14);
	clear_array_list(&l);

	assert(l.index == 0);
}

void test_heap()
{
	Heap h;
	init_heap(&h);
	assert(h.index == 0);
	assert(is_heap_empty(&h) == true);
	push_heap(&h, 50);
	assert(h.index == 1);
	assert(peek_heap(&h) == 50);
	pop_heap(&h);
	assert(h.index == 0);
	replace(&h, 50);
	assert(h.data[0] == 50);
	push_heap(&h, 30);
	push_heap(&h, 40);
	push_heap(&h, 35);
	assert(h.data[0] == 50);
	assert(h.data[1] == 35);
	assert(h.data[2] == 40);
	assert(h.data[3] == 30);
}

int main(int argc, char *argv[])
{
	if (strcmp(argv[1],'--test'))
	{
		test_stack();
		printf("Stack tests have been executed successfully\n");
		test_queue();
		printf("Queue tests have been executed successfully\n");
		test_arraylist();
		printf("Array list tests have been executed successfully\n");
		test_heap();
		printf("Heap tests have been executed successfully\n");
		printf("...\n");
		printf("Tests have been executed successfully\n");
	}

	return (0);
}