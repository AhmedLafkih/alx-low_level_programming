#include"main.h"
/**
 *_isalpha - function to check if
 *           characters are lowercase or uppercase
 *
 *@ch: tackes input from  functions.
 *Return: 1 if true else 0
*/

int _isalpha(int ch)
{
if (ch >= 97 && ch <= 122)
{return (1); }
if (ch >= 65 && ch <= 90)
{return (1); }
return (0);
}
