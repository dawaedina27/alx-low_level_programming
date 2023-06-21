#include "main.h"

/**
 * _islower - Checks for alphabetic character
 * @c: The charater to be checked
 * Returned: 1 for alphabetic charater or 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
