#include <stdio.h>
#include <limits.h>
#include <assert.h>

void section_start(char *s)
{
        printf("\n\033[1;32m[ %*s%*s ]\033[0m\n",(int)(10+strlen(s)/2),s,(int)(10-strlen(s)/2),"");
}

void section_field(char *str, void *args)
{
	printf("\t");
	printf(str, args);
	// printf("\n");
}
void section_end(char *s)
{
        printf("\n\033[1;31mx %*s%*s x\033[0m\n",(int)(10+strlen(s)/2),s,(int)(10-strlen(s)/2),"");
}

void nl(void){printf("\n");}
void tab(void){printf("\t");}
