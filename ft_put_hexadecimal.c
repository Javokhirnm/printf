/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:38 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:18 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_puthexidecimal(unsigned int a, char x)
{
	size_t	size;
	size_t	bytes;
	char	*string;

	string = NULL;
	bytes = 0;
	if (a == 0)
		bytes += write(1, "0", 1);
	else
	{
		string = ft_hexadecimal_converter(a, x);
		size = ft_strlen(string);
		bytes += write(1, string, size);
		free(string);
	}
	return (bytes);
}
