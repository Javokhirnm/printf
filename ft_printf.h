/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 23:18:12 by marvin            #+#    #+#             */
/*   Updated: 2025/04/03 23:18:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putnumber(long n, int base);
int	ft_putnumber_caps(long n, int base);
int	print_format(char specifier, va_list ap);
int	ft_putunit_max(unsigned long num, int base);
int	ft_putpointer(void *pointer);
int	ft_putstring(char *str);

#endif