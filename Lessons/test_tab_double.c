/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tab_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:26:50 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/14 15:33:10 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
	write(1,&c,1);
}	
void main ()
{
char tab [2][2];
char b;

b = "B";
tab [0][0] = b;

ft_putchar (tab[0][0]);

}
