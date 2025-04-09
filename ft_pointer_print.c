/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:20 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:16 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static char		*hex_converter(unsigned long j, char *string);
static size_t	size_of_string(unsigned long a);

size_t	ft_pointer_print(void *address)
{
	size_t		bytes;
	char		*pointer;
	uintptr_t	integ;

	integ = (uintptr_t)address;
	bytes = 0;
	pointer = NULL;
	if (integ == 0)
		bytes += ft_string("(nil)");
	else
	{
		pointer = hex_converter(integ, pointer);
		bytes += ft_string("0x");
		bytes += ft_string(pointer);
	}
	free(pointer);
	return (bytes);
}

static char	*hex_converter(unsigned long integ, char *string)
{
	const char	*characters;
	int			remainder;
	int			i;

	i = size_of_string(integ);
	string = malloc((i + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[i] = '\0';
	i--;
	characters = "0123456789abcdef";
	while (integ > 0)
	{
		remainder = integ % 16;
		string[i] = characters[remainder];
		integ /= 16;
		i--;
	}
	return (string);
}

static size_t	size_of_string(unsigned long a)
{
	int		i;
	size_t	amount;

	amount = 0;
	i = 0;
	while (a > 0)
	{
		amount++;
		a = a / 16;
	}
	return (amount);
}
