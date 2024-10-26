/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:34:12 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/04 18:57:43 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (nb > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char dest[20] = "oussama ";
	char src[] = "lachhab";
	int	nb;

	nb = 3;
	ft_strcat(dest, src, nb);
	printf("%s", dest);
}*/
