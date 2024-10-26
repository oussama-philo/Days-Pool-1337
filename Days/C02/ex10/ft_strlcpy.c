/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:16:55 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/04 03:48:17 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "salut, comment tu vas ?";
	char dest[40];
	int size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	printf("%d", dest);

	return 0;
}*/
