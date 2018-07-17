/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_4_chiffre_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 01:09:04 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/13 01:48:55 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1,&c,1);
}

void ft_Test_affichage (void)
{
	int 	tableau_chiffres_search [3];
	int 	i;
	int 	number_max;
	int 	number_rechercher [3];

	i=0;
	number_max = 3;
	while(i<3)
	{
		ft_putchar (tableau_chiffres_search [i]);
		i++;
		if (i == 2)
		{
		ft_putchar (' ');
		}
	}
}

int main ()
{
ft_Test_affichage();	
}
