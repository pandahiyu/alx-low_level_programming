#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - function
 *
 *
 * Return - success
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
}
