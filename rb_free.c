/*
** EPITECH PROJECT, 2018
** free
** File description:
** coding
*/

#include <stdlib.h>
#include "include.h"

void	rb_free(void *str)
{
	if (str != NULL)
		free(str);
	else
		write(2, "Cannot free NULL pointer\n", 20);
}
