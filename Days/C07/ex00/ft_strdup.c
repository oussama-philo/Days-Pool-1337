/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:02:07 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/11 18:07:10 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*text;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	text = malloc(i + 1);
	if (text == NULL)
		return (NULL);
	while (src[j] != src[i])
	{
		text[j] = src[j];
		j++;
	}
	text[j] = '\0';
	return (text);
}
