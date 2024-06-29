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
void section_end()
{
		char *s = "---------------";
        printf("\n\033[1;32m+ %*s%*s +\033[0m\n\n\n",(int)(10+strlen(s)/2),s,(int)(10-strlen(s)/2),"");
}

size_t
strlcpy(char * dst, const char * src, size_t maxlen) {
    const size_t srclen = strlen(src);
    if (srclen + 1 < maxlen) {
        memcpy(dst, src, srclen + 1);
    } else if (maxlen != 0) {
        memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}

void nl(void){printf("\n");}
void tab(void){printf("\t");}
