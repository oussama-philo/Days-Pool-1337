/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:19:50 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/04 01:45:55 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char			hex_chars[16];
	unsigned char	high;
	unsigned char	low;

	hex_chars[0] = '0';
	hex_chars[1] = '1';
	hex_chars[2] = '2';
	hex_chars[3] = '3';
	hex_chars[4] = '4';
	hex_chars[5] = '5';
	hex_chars[6] = '6';
	hex_chars[7] = '7';
	hex_chars[8] = '8';
	hex_chars[9] = '9';
	hex_chars[10] = 'a';
	hex_chars[11] = 'b';
	hex_chars[12] = 'c';
	hex_chars[13] = 'd';
	hex_chars[14] = 'e';
	hex_chars[15] = 'f';
	high = c / 16;
	low = c % 16;
	ft_putchar(hex_chars[high]);
	ft_putchar(hex_chars[low]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_puthex((unsigned char)*str);
		}
		str++;
	}
}
/*
int main() {

char str[] = "Coucou\ntu vas bien ?";
ft_putstr_non_printable(str);


    return 0;
}*/
