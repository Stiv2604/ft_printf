/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:04:40 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 00:04:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int     lenght(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int ft_convert_hex(unsigned int nb, char *str, t_print *print)
{
	char				*r;
	int					i;
	unsigned int		rnb;

	i = 0;
    r = str;
	rnb = nb;
	if (nb == 0)
		r[i++] = '0';
	while (nb > 0)
	{
			r[i++] = "0123456789ABCDEF"[nb % 16];
			nb /= 16;
	}
	if (rnb != 0 && print->hash == 1)
	{
		r[i++] = 'X';
		r[i++] = '0';
	}
    return (i);
}

char    *ft_print_upper_x(unsigned int new, t_print *print)
{
    char    *str;
    int     i;
    int     r;
    int     tmp;
    int     k; 

    k = 0;
    r = lenght(new);
	ft_search(new, print, &r);
	if (new == 0 && print->is_precision == 1 && print->precision == 0)
		return (NULL);
    str = (char *)malloc(sizeof(char) * (r + 1));
    i = ft_convert_hex(new, str, print);
    r = i;
    while (k < i - 1)
	{
		tmp = str[i - 1];
		str[i - 1] = str[k];
		str[k] = tmp;
        i--;
        k++;
	}
    str[r] = '\0';
    return (str);
}
