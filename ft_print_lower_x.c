/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:57:38 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 23:57:38 by marvin           ###   ########.fr       */
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

static int  ft_convert_hex(unsigned int nb, char *str, t_print *print)
{
	char			*r;
	int				i;
	unsigned int	rnb;

	i = 0;
    r = str;
	rnb = nb;
	if (nb == 0)
		r[i++] = '0';
	while (nb > 0)
	{
			r[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
	}
    if (rnb != 0 && print->hash == 1)
	{
		r[i++] = 'x';
		r[i++] = '0';
	}
    return (i);
}

void		ft_search(unsigned int new, t_print *print, int *r)
{
	if (print->hash == 1)
		(*r) += 2;
	if (new == 0 && print->precision == 0 && print->is_precision == 1)
		print->is_len += 0;
	if (print->is_zero != 0 && new == 0 && print->precision == 0 && print->is_precision == 1)
	{
		print->is_len += print->is_zero;
		while (print->is_zero > 0)
		{
			write(1, " ", 1);
			print->is_zero--;
		}
	}
}

char    *ft_print_lower_x(unsigned int new, t_print *print)
{
    char    *str;
    int     xec;
    int     r;
    int     tmp;
    int     k; 

    k = 0;
    r = lenght(new);
	ft_search(new, print, &r);
	if (new == 0 && print->is_precision == 1 && print->precision == 0)
		return (NULL);
    str = (char *)malloc(sizeof(char) * (r + 1));
    xec = ft_convert_hex(new, str, print);
    r = xec;
    while (k < xec - 1)
	{
		tmp = str[xec - 1];
		str[xec - 1] = str[k];
		str[k] = tmp;
        xec--;
        k++;
	}
    str[r] = '\0';
    return (str);
}
