/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:50:11 by olachhab          #+#    #+#             */
/*   Updated: 2024/08/28 14:52:04 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a' ;
	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
