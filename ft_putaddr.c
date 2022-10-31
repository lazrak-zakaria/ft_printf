/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:35:28 by zlazrak           #+#    #+#             */
/*   Updated: 2022/10/31 14:10:44 by zlazrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr(size_t n, int *l, int f)
{
	char	*a;

	if (!f)
	{
		ft_putstr("0x", l);
		if (*l < 0)
			return ;
		f = 1;
	}
	a = "0123456789abcdef";
	if (n >= 16)
		ft_putaddr(n / 16, l, f);
	if (*l < 0)
		return ;
	ft_putchar(a[n % 16], l);
}
