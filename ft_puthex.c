/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:05:47 by zlazrak           #+#    #+#             */
/*   Updated: 2022/10/31 14:12:37 by zlazrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int *l, char c)
{
	char	*a;

	if (c == 'x')
		a = "0123456789abcdef";
	else
		a = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, l, c);
	if (*l < 0)
		return ;
	ft_putchar(a[n % 16], l);
}
