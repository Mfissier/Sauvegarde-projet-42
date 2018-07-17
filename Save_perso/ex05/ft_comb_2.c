/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:28:53 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/13 01:11:01 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int ft_display_number(int x)
{
	char	u_nb;
	char	d_nb;
	char	h_nb;
	char	m_nb;

	*u_nb = 0;
	*d_nb = 0;
	*h_nb = 0;
	*m_nb = 0;

	while (m_nb != c_nb)
	{
		ft_conversion_int_char (&u_nb, &d_nb, &h_nb,&m_nb);
	}
	
	
}

void ft_conversion_int_char (char *unit, char *decim, char *hund, char *mile)
{
	int     number_search [4];
	char	number_write_colonne [4]; 
	char    convert;
	char	unit;
	char	decim;
	char	hund;
	char	mile;
	int     i;


	i = 0;
	while(i < 4)
	{
		convert = '0';
		number_search [i] = 5  ;
		number_write_colonne[i] = convert + number_search [i];
		ft_putchar (number_write_colonne[i]);
		if (i == 1)
		{
			ft_putchar (' ');
		}
		i++;
	}
}

int main ()
{
	ft_conversion_int_char();
}
