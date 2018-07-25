/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 22:47:03 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/25 04:00:35 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_putchar(char c);

int		ft_putnbr(int tab);

int *ft_range(int min, int max)
{	
	int *tab;
	int size;
	int i;
	
	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(*tab) * (size));
	if (tab == NULL)
		return (0);
	while (min < max)
	{	
		tab[i] = min;
		min++;
		i++;
	}
	tab[size] = '\0';
	return (tab);
}
#include <stdio.h>
int		 main()
{
	int	i;
	int *tab;

	tab = ft_range(10,20);
	i = 0;
	while (tab[i] != '\0')
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
			return (0);
}
