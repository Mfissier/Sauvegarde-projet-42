# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_else_if                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfissier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/11 01:47:53 by mfissier          #+#    #+#              #
/*   Updated: 2018/07/11 02:29:23 by mfissier         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #
#include <unistd.h> / Apres header ligne vide !!!
	<*TAB*> /conseille si ta fonction commence par int il faut mettre deux tab.
void*tab*ft_putchar(char c) /jamais despace entre fonction et ()
{
	write(1, &c, 1); 
}
/Toujours une ligne vide apre lacolade de fermeture dune fonction

void ft_test_boleen(void)
{ /Apres une acolade toujours faire un tab toutes les lignes entre les acolades doivent etre decaler d'une TAB.
	int 			a; / Dabord declaration des variables *
	unsigned int	b; / mettre le nom des variables sur la meme colones *TAB*
	int				c; 
	/ Toujours sauter une ligne apre la declaration des variables. 
	
	/Ensuite donner les valeurs aux variables.	
	a = 3;
	b = 5;
	c = 6; /Pas de saut de ligne apres avoir implemente une variable
	if(a>3)
	{ les acolades sont au meme niveau que les declarations.
		ft_putchar('A');
	}
	else if(b<c)
	{
		ft_putchar('B');
	}
}
/Regles en plus :
Toujours avoir un espace* de chqaue cote d'un operateur
>* =* ?* 
/Toujours mettre le pointeur * a gauche du nom dupointeur
/char *c;

while
if 
else ()
{
	/Jamais d'espace ou de tab apres la fin d'une ligne
}
