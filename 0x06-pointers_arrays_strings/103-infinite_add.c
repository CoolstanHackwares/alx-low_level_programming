#include "main.h"

/**
 * infinite_add - A function that adds two numbers
 * @n1: The first number (positive)
 * @n2: The second number (positive)
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result (r) or 0 if the result cannot be stored in r
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	int len1 = 0, len2 = 0;

	while (n1[len1])
	len1++;
	while (n2[len2])
	len2++;

	if (len1 >= size_r - 1 || len2 >= size_r - 1)
	return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	m = 0;

	while (i >= 0 || j >= 0 || m)
{
	n = m;
	if (i >= 0)
	n += n1[i--] - '0';
	if (j >= 0)
	n += n2[j--] - '0';

	m = n / 10;
	r[k++] = n % 10 + '0';
}
	for (l = 0, k -= 1; l < k; k--, l++)
{
	m = r[k];
	r[k] = r[l];
	r[l] = m;
}

	r[k] = '\0';

	return (r);
}

