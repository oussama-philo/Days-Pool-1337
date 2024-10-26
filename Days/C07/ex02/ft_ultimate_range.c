/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:24:29 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/14 19:31:18 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*s;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	s = (int *) malloc (len * sizeof(int));
	if (s == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		s[i] = min + i;
		i++;
	}
	*range = s;
	return (i);
}
