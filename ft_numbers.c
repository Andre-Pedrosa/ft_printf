/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:26:50 by apedrosa          #+#    #+#             */
/*   Updated: 2023/01/28 16:59:15 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb >= INT_MIN && nb <= __INT_MAX__)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			(*len) += 11;
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-', len);
			nb = -nb;
		}
		if (nb <= 9)
		{
			ft_putchar(nb + '0', len);
			return ;
		}
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}

void	ft_unsigned_nbr(unsigned int nb, int *len)
{
	if (nb >= 10)
		ft_unsigned_nbr(nb / 10, len);
	ft_putchar(nb % 10 + 48, len);
}

void	ft_hexa(unsigned int n, char c, int *len)
{
	char	str[20];
	char	*hexa;
	int		i;

	i = 0;
	if (n == 0)
		ft_putchar('0', len);
	if (c == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	while (n != 0)
	{
		str[i] = hexa[n % 16];
		n /= 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}

void	ft_pointer_address_hex(unsigned long n, int *len)
{
	char	str[20];
	char	*hexa;
	int		i;

	i = 0;
	hexa = "0123456789abcdef";
	if (!n)
		ft_putstr("(nil)", len);
	else
	{	
		while (n != 0)
		{
			str[i] = hexa[n % 16];
			n /= 16;
			i++;
		}
		ft_putstr("0x", len);
		while (i--)
			ft_putchar(str[i], len);
	}
}
