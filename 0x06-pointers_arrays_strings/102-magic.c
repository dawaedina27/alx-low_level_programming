include <stdio.h>

int main (void)
{
	int n;
	int a[s];
	int *p;

	a[2] =1024;
	p = &n;

/**
 * write your line of code here
 * Remember:
 * - you are not allowed use a and p
 * - only one statement
 */
	*(p + 5) = 98;
	
	/*... so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
