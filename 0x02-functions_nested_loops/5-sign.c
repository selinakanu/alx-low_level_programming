#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 *@n: the int to print
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
gibson uwhetu5:50 PM
#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 *@n: The int to print
 * Return: Always 0.
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
