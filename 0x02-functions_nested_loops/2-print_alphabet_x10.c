#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 * return: void
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
