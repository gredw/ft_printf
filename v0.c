#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr( char *s)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar(*s);
			s++;
		}
	}
}

int	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

store_arg *create_elem(char *arg)
{
	store_arg *new;
	new = (store_arg *)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->s = arg;
	new->next = NULL;
	return (new);
}

void push_back(store_arg **begin_list)
{
	t_list *new;

	if ((new = (t_list *)malloc(sizeof(*new))) == NULL)
		return (NULL);
	if (*begin_list == NULL)
		return(new);
	t_list *temp;

	temp = *begin_list;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
	new->data = data;
}
	

	

void count_param(char *arg0, ... )
{
	int count;
	va_list ap;
	store_arg *list;
	store_arg *temp;
	char *current;
	int i  = 1;

	count = 0;
	current = arg0;
	
	list = create_element(current);
	
	va_start(ap, arg0);
	while (current != NULL)
	{	
		printf("%d\n",ft_strlen(current)); //PRINT
		current = va_arg(ap, char*);
		
		create_elem(current);
		while (
		count++;
	}
	va_end(ap);
	
	va_start(ap, arg0);
	printf("%s", arg0);			//PRINT
	while(i < count)
	{
		printf("%s", va_arg(ap, char*)); //PRINT
		i++;
	}
	va_end(ap);	
	printf("%d\n", count);			//PRINT
}
		
	

int main( int argc, char **argv)
{
//	int a = 4;

	count_param("Bonjour\n", "grosse\n","morue\n", NULL)
	return(0);
}

