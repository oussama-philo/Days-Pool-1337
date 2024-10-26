/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:48:21 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/01 15:15:42 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int tab[] = {9,8,7,6,5,4,3,2,1,0};
	int	size;
	int i = 0;

	size = sizeof(tab) / sizeof(int);

	fr_sort_int_tab(tab, size);

	while (i < size)
	{
		printf(" %d", tab[i]);
		i++;
	}	
}*/
