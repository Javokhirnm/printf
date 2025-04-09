/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:50 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:20 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static char		*ft_unsigned_converter(unsigned int x);
static size_t	size_of_number(unsigned int x);

size_t	ft_put_unsigned(unsigned int a)
{
	size_t	bytes;
	char	*number;

	bytes = 0;
	if (a == 0)
		bytes += write(1, "0", 1);
	number = ft_unsigned_converter(a);
	bytes += write(1, number, ft_strlen(number));
	free(number);
	return (bytes);
}

static char	*ft_unsigned_converter(unsigned int x)
{
	char	*str;
	size_t	size;

	size = size_of_number(x);
	str = malloc((sizeof(char) * (size + 1)));
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	size--;
	while (x > 0)
	{
		str[size] = x % 10 + '0';
		size--;
		x = x / 10;
	}
	return (str);
}

static size_t	size_of_number(unsigned int x)
{
	size_t	size;

	size = 0;
	while (x > 0)
	{
		size++;
		x = x / 10;
	}
	return (size);
}
