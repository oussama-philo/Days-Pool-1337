/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:54:09 by olachhab          #+#    #+#             */
/*   Updated: 2024/09/04 16:23:13 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	lowcar(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
# include <stdio.h>

int main()
{

char str[] = "sAlut, commEnt tU vas ? 42mots Quarante-deux; cinquante+et+un";

ft_strcapitalize(str);

printf("%s", str);

}*/
