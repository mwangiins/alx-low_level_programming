#include "main.h"
/**
 *_strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int c = -1, r;
for (r = 0; dest[r] != '\0'; r++)
;

do {
	c++;
	dest[r] = src[c];
	r++;
} while (src[c] != '\0');

return (dest);
}
