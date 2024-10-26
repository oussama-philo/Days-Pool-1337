/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:33:10 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/14 21:20:10 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	str_copy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	concatenate_strs_sep(char *res, int size, char **strs, char *sep)
{
	int	position;
	int	sep_len;
	int	strs_len;
	int	i;

	sep_len = 0;
	strs_len = 0;
	i = 0;
	sep_len = str_len(sep);
	while (i < size)
	{
		strs_len = str_len(strs[i]);
		str_copy(res + position, sep, sep_len);
		position += strs_len;
		if (i < size - 1)
		{
			str_copy(res + position, sep, sep_len);
			position += sep_len;
		}
		i++;
	}
	res[position] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*empty;
	char	*res;
	int		sep_len;
	int		all_len;

	i = 0;
	all_len = 0;
	if (size == 0)
	{
		empty = (char *) malloc (1);
		if (empty == NULL)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	sep_len = str_len(sep);
	while (i < size)
		all_len += str_len(strs[i++]);
	all_len += (size - 1) * sep_len;
	res = (char *) malloc (all_len + 1);
	if (res == NULL)
		return (NULL);
	concatenate_strs_sep(res, size, strs, sep);
	return (res);
}
