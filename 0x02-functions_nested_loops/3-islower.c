#include"main.h"
/**
 *_islower - function to check if
 *           character is lowercase
 *
 *@ch: chacks input of function
 *Return: returns 1 if `c` is lowecase
 *        else always 0 (Success)
*/

int _islower(int ch)
{
if (ch >= 97 && ch <= 122)
{return (1); }
return (0);
}
