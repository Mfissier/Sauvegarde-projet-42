/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 00:00:49 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/11 00:33:08 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a = '0';
	char b = '1';
	char c = '2';
	char virgul = ',';
	char space = ' ';
		while (a<='7' && b<='8' && c<='9')
		{
			char a = '0';
			char b = '1';
			char c = '2';
			char virgul = ',';
			char space = ' ';
			c++;
		}

}


int main ()
{
	ft_print_comb();
}
