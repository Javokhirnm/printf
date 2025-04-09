/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:44 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:19 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_put_number(int a)
{
	size_t	size;
	size_t	bytes;
	char	*string;

	bytes = 0;
	string = ft_itoa(a);
	size = ft_strlen(string);
	bytes += write(1, string, size);
	free(string);
	return (bytes);
}
