/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:10:24 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/10 17:20:17 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}
