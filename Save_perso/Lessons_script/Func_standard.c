# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Func_standard                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfissier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/13 02:51:37 by mfissier          #+#    #+#              #
#    Updated: 2018/07/13 02:52:46 by mfissier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#include <unistd.h>

void ft_putchar (char c)
{
	        write(1, &c, 1);
}

int main ()
{
	
}
