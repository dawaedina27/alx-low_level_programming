#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point/path
 * Return: Always 0 (When it is successful)
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

if (m > 5)
{
printf("Last digit of %d is %d and is greater then 5\n", n, m);
}

if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}

if (m < 6 && m != 0)
{
printf("Last digit of %d is %d and is less thn 6 and m is not 0\n", n, m);
}

return (0);
}