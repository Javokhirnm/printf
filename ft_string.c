/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:58 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:21 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_string(char *s)
{
	size_t	bytes;
	int		i;

	i = 0;
	bytes = 0;
	if (s == NULL)
		bytes += write(1, "(null)", 6);
	else
	{
		while (s[i] != '\0')
		{
			bytes += write(1, &s[i], 1);
			i++;
		}
	}
	return (bytes);
}
