/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:29:16 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/09 10:00:34 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar (char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	char alphabet_begin_with_z = 'z';
	char alphabet_end_with_a = 'a';
	while (alphabet_begin_with_z >= alphabet_end_with_a)
	{
		ft_putchar(alphabet_begin_with_z);
		alphabet_begin_with_z --; 
	}
}

int main (void)
{
	ft_print_reverse_alphabet();
}
