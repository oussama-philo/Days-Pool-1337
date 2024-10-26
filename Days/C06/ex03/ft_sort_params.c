/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:20:49 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/09 15:06:20 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_param(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - j)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
			}
			i++;
		}
		j++;
	}
	print_param(ac, av);
	return (0);
}
