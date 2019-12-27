/*
** EPITECH PROJECT, 2018
** realloc
** File description:
** coding
*/

#include <string.h>
#include "include.h"

char	*rb_realloc_str(char *str, int size)
{
	char	*newstr = NULL;

	if (size <= 0) {
		return (NULL);
	}
	if (str != NULL && size > my_strlen(str))
	{
		return (str);
	}
	newstr = malloc(sizeof(newstr) * size + 1);
	newstr = rb_strcpy(newstr, str);
	rb_free(str);
	return (newstr);
}
