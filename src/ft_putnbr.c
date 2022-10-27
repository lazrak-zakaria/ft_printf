/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:57:41 by zlazrak           #+#    #+#             */
/*   Updated: 2022/10/27 15:02:06 by zlazrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_putnbr(int n, int *l)
{
	if(n < 0)
	{
		ft_putchar('-', l);
		if (n < -9)
			ft_putnbr((n / 10) * -1, l);
		ft_putchar(((n % 10) * -1) + 48, l);
	}
	else if (n > 9)
	{
		ft_putnbr(n/10, l);
		ft_putchar((n % 10) + 48, l);
	}
	else
		ft_putchar(n + 48, l);
}
