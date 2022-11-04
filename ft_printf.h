/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:03:40 by zlazrak           #+#    #+#             */
/*   Updated: 2022/11/04 13:19:22 by zlazrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *l);
void	ft_putnbr(int c, int *l);
void	ft_putstr(char *s, int *l);
void	ft_putun(unsigned int n, int *l);
void	ft_puthex(unsigned int n, int *l, char c);
void	ft_putaddr(size_t n, int *l, int f);
int		ft_printf(const char *s, ...);
#endif
