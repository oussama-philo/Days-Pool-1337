/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:15:01 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/04 03:38:49 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "oussaMa lachhab sidi bouzid";

    ft_struppercase(str);

    printf("%s", str);
}*/
