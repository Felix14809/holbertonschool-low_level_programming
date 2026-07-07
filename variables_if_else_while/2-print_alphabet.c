#include <stdio.h>
/**
 * main - declares a character
 * then runs a do while loop
 * until character "z" is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
    int i = 97;

    while (i <= 122)
    {
        putchar (i);
        i++;
    }

    putchar ('\n');
    return (0);
}
