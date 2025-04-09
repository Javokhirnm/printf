/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:49:27 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:17 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_utils.h"
#include "ft_printf.h"

static size_t	format(const char *list, va_list args, int current_pos);

int	ft_printf(const char *str, ...)
{
	int		i;
	size_t	bytes;
	va_list	args;

	bytes = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			bytes += format(str, args, i + 1);
			i++;
		}
		else
			bytes += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (bytes);
}

static size_t	format(const char *list, va_list args, int current_pos)
{
	size_t	bytes;

	bytes = 0;
	if (list[current_pos] == 'c')
		bytes += ft_char((int)va_arg(args, int));
	else if (list[current_pos] == 's')
		bytes += ft_string((char *)va_arg(args, char *));
	else if (list[current_pos] == 'p')
		bytes += ft_pointer_print((int *)va_arg(args, int *));
	else if (list[current_pos] == 'd' || list[current_pos] == 'i')
		bytes += ft_put_number((int)va_arg(args, int));
	else if (list[current_pos] == 'u')
		bytes += ft_put_unsigned((unsigned int)va_arg(args, unsigned int));
	else if (list[current_pos] == 'x' || list[current_pos] == 'X')
		bytes += ft_puthexidecimal((int)va_arg(args, int), list[current_pos]);
	else if (list[current_pos] == '%')
		bytes += write(1, "%", 1);
	return (bytes);
}
