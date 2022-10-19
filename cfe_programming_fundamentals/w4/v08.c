/*
 * Storage class example
 * 26 Sept
 * LM
 */
#include <stdio.h>

extern int reps = 0; // We could have avoided using "extern"
		     // This item will exist trough all the code

void f (void)
{
	static int called = 0;
	printf("f called %d\n", called);
	// The second time "called" is used it is going to change
	called++;
	reps = reps + called;
}

int main (void)
{
	auto int i = 1;
	const int limit = 10; // This makes teh initial value to remain the same
	for (i=1; i<limit; i++)
	{
		printf("i local = %d, reps global = %d\n", i, reps);
		f();
	}
	return 0;
}
