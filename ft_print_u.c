/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:28:48 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 23:28:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char    *putch_u(long int n, long int l)
{
    long int		i;
	char			*str;

	i = l;
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == 0)
		return (NULL);
	i--;
	str[i + 1] = '\0';
	while (l > 0)
	{
		str[i] = '0' + (n % 10);
		n = (n / 10);
		i--;
		l--;
	}
	return (str);
}

char     *ft_print_ud(unsigned int new, t_print *print)
{
    int                 l;
	char				*str;

    l = len(new);
	if (new == 0 && print->precision == 0 && print->is_precision == 1 && print->is_zero == 0)
	{
		str = NULL;
		print->is_len += 0;
		return (str);
	}
	if (new == 0 && print->precision == 0 && print->is_precision == 1 && print->is_zero > 0)
	{
		print->is_len += print->is_zero;
		str = NULL;
		while (print->is_zero > 0)
		{
			write(1, " ", 1);
			print->is_zero--;
		}
		return (str);
	}
	str = putch_u(new, l);
	return (str);
}