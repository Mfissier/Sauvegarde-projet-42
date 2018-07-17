/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:56:57 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/17 16:12:00 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;
	int		j;

	j = nb;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb <= 12 && nb > 0)
	{
		while (i != j)
		{
			nb = nb * i;
			i++;
		}
		return (nb);
	}
	return (0);
}
