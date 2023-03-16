#include "main.h"

/**
 * _calloc - allocates nmemb * size memory array
 * @nmemb: input string
 * @size: input string
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, mlen;

	mlen = nmemb * size;
	if (mlen <= 0)
		return (NULL);

	p = malloc(mlen);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < mlen)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
