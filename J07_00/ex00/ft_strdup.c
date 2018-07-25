/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 22:34:20 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/25 00:18:08 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char *s;
	int i;
	i = 0;

	if (src[i] == '\0')
		return (0);
	while (src[i])
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (s);
}

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%s", ft_strdup(argv[1]));
	}	
	return (0);
}
