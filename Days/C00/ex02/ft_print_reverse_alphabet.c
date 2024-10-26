/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:00:33 by olachhab          #+#    #+#             */
/*   Updated: 2024/08/28 14:56:56 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha2 ;

	alpha2 = 'z';
	while (alpha2 >= 'a')
	{
		write (1, &alpha2, 1);
		alpha2--;
	}
}
