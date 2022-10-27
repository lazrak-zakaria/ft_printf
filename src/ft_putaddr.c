/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:35:28 by zlazrak           #+#    #+#             */
/*   Updated: 2022/10/27 15:31:38 by zlazrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putaddr(size_t n, int *l, int f)
{
	char *a;
	
	if (!f)
	{
		ft_putstr("0x",l);
		f = 1;
	}
	a = "0123456789abcdef";
	if(n > 16)
		ft_putaddr(n / 16, l,f);
	ft_putchar(a[n % 16], l);
}/*
int main()
{
	int o =0;
	char c;
	ft_putaddr((size_t)&c,&o,0);
	printf("\n%p",&c);
}*/