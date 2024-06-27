#include <stdio.h>

typedef struct colors
{
	char red[8];
	char green[8];
	char yellow[8];
	char blue[8];
	char purple[8];
	char cyan[8];
	char bold_red[8];
	char bold_green[8];
	char bold_yellow[8];
	char bold_blue[8];
	char bold_purple[8];
	char bold_cyan[8];
	char reset[5];
} t_colors;

extern t_colors pprint_colors = {"\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m", "\033[0;36m", "\033[1;31m", "\033[1;32m", "\033[1;33m", "\033[1;34m", "\033[1;35m", "\033[1;36m", "\033[0m"};

void pprint_int_tab(int *tab, int sz)
{
	printf("{ ");
	for (int i = 0; i < sz - 1; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("%d }", tab[sz - 1]);
}
