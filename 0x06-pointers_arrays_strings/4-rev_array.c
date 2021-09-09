#include "main.h"

/**
 *reverse_array - reversing the content of an array
 *@a: array
 *@n: elements number in array
 */

void reverse_array(int *a, int n)
{
	int tmp, bin = 0;
	int usr = n - 1;

	while (bin < usr)
	{
		tmp = *(a + bin);
		*(a + bin) = *(a + usr);
		*(a + usr) = tmp;
		bin++, usr--;
	}
}
