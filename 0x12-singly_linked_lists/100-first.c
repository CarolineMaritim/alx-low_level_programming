#include <stdio.h>
void myfunc(void) __attribute__((constructor));
/**
 * main - Prints before main func is executed
 */

void myfunc(void)
{
printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
