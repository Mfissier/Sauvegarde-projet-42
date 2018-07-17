/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fonction_Fonction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:14:20 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/12 20:52:24 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar (char c)
{
	write(1,&c,1);
}


int ft_renvoi_nbr(int d)
{
int nmbr;

return (nmbr = 3);
}

void ft_renvoi_un_nbr(char c)
{
char trois = '0';
ft_renvoi_nbr(6545);

trois = trois + nmbr;

ft_putchar (trois);

}


int main ()
{
ft_renvoi_un_nbr();
}
