/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:23:51 by apedrosa          #+#    #+#             */
/*   Updated: 2023/01/27 18:44:46 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_putstr(char *str, int *len);
void	ft_putchar(char a, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_unsigned_nbr(unsigned int nb, int *len);
void	ft_hexa(unsigned int n, char c, int *len);
void	ft_pointer_address_hex(unsigned long n, int *len);

#endif