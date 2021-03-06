/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 08:25:49 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/09 09:15:31 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void)
{
	char alphabet = 'a';
	char end_alphabet = 'z';
	while (alphabet <= end_alphabet)
	{
		ft_putchar(alphabet);
		alphabet++;	
	}
}

int main(void)
{
ft_print_alphabet();
}
