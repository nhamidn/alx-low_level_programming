#include "lists.h"

void before_main(void) __attribute__((constructor));
/**
 * before_main - function that run before main.
 * Return: Nothing (void function).
 */
void before_main(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\nI bore my house upon my back!\n");
}
