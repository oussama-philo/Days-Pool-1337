/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:22:22 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/15 00:03:32 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar((n / 10) + '0');
		ft_putchar((n % 10) + '0');
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putnbr(nb1);
			ft_putchar(' ');
			ft_putnbr(nb2);
			if (nb1 != 98 || nb2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}
