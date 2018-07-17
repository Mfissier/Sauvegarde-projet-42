/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 03:08:53 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/13 04:32:15 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

void recolte_chiffre(int x)
{
	char convert_int_char_x;
    int compteur;
	compteur= x;
	convert_int_char_x = '0';
	convert_int_char_x = convert_int_char_x + compteur;
	ft_putchar(convert_int_char_x);
}




int main()
{
int svp;
svp = 2;
recolte_chiffre (svp);
return (0);
}
