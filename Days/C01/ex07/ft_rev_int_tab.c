/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:39:31 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/01 13:47:34 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	f;
	int	l;

	f = 0;
	l = size - 1;
	while (f < l)
	{
		tmp = tab[f];
		tab[f] = tab[l];
		tab[l] = tmp;
		f++;
		l--;
	}
}
/*
int main()
{
	int tab[] = {1,2,3,4};
	int size;
	int i = 0;

	size = sizeof(tab) / sizeof(int);
	
	printf("Size of Table : %d element \n", size);

	ft_rev_int_tab(tab, size);

	while (i < size)
	{
		printf("%d", tab[i];
				i++;
	}
} */
