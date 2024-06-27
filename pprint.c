#include <stdio.h>

void pprint_int_tab(int *tab, int sz)
{
	printf("{ ");
	for (int i = 0; i < sz-1; i++)
	{
		printf("%d, ",tab[i]);
	}
	printf("%d }", tab[sz-1]);
}

