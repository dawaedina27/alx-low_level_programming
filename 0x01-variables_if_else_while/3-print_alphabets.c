#include <stdio.h>
/**
 * main - Entry point
 * Return: Alsways 0 when successful
 */
int main(void)
{
char c;
char C;

for (c = 97; c <= 122; c++)
{
putchar(c);
}

for (C = 65; C <= 90; C++)
{
putchar(C);
}

putchar('\n');
return (0);

}
