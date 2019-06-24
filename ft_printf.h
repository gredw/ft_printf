#ifndef FT_PRINTF 
# define FT_PRINTF 
#include <stdlib.h>
# include <stdarg.h>

typedef struct store_arg
{
	char *s;
	int len;
	char conversion;
	char flag;
	struct store_arg *next;
}	store_arg;

#endif
