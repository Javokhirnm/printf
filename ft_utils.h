/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 23:50:03 by jnematil          #+#    #+#             */
/*   Updated: 2025/04/04 23:50:22 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_char(char s);
size_t	ft_string(char *s);
size_t	ft_pointer_print(void *buffer);
char	*ft_hexadecimal_converter(unsigned int a, char x);
size_t	ft_put_number(int a);
size_t	ft_puthexidecimal(unsigned int a, char x);
size_t	ft_put_unsigned(unsigned int a);

#endif