/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:54:46 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/05 22:16:48 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int main (void)
{
    char src[] = "I have";
    char dest [] = "1 million dollar";
    printf("%i \n", ft_strlcat(dest, src, 21));
    printf("%s \n", dest);
}*/
