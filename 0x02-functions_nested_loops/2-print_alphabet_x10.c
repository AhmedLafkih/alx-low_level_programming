#include"main.h"

/**
 *print_alphabet_x10 - utilizes on the _putchar function to print the
 *                  alphabet from a - z 10 times
*/

void print_alphabet_x10(void)
{
int ch;
int i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{_putchar(ch); }
putchar('\n');
++i; }
}
