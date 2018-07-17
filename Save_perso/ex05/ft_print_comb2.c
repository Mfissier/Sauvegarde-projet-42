/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 01:11:23 by mfissier          #+#    #+#             */
/*   Updated: 2018/07/13 14:47:56 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}


void ft_conversion_int_char(int c)
{
	int     number_search;
	char    convert;
	
	convert = '0';
	number_search = c;
	convert = convert + number_search;
	ft_putchar (convert);
}

void ft_putcher_virgul(void)
{
ft_putchar(',');
ft_putchar(' ');
}

void convert_decimal_unit (int *inf_ten, int *chiffreten, int *chiffrezero)
{

/*		chiffre_unit = nbr_a % 10;
		ft_conversion_int_char(chiffre_unit);
		chiffre_deca = nbr_a / 10;
		ft_conversion_int_char(chiffre_deca);
		ft_putcher_virgul();
		
		
		if (nbr_b > 0)
		ft_conversion_int_char(ins_z);
		ft_conversion_int_char(nbr_a);
		ft_putcher_virgul();
*/
}

void ft_ad_start_zz_unit_decade(int indic_colone, int nbr_du)
{	
	/*---------------IF NB_U > 9 */
	/*IF________ indic = 1 ?> gere colone de droite */
	/*0 0   / <0 9> > if nbr_du < 9 ___> Imprime 0 et imprime 1++ */
	
	/* */
/* */	
	/*<0 0> / 0 9   > if nbr_du > 9 ___> Imprime 0 0
	 * */ 
	/*IF _______ indic = 0 ?> gere la colone de droite */
	/*---------------IF NB_U > 9 */


	/* */
	/* */
	/* */
}

void ft_print_comb2 (void)
{	
	int nbr_a;
	int nbr_b;

	W3
	{


		W2
		{


			While(nbr_a > 9)
			{
				nbr_a ++;
				/*nbr_b = 00 / nbr_a = 1++; */
				
				ft_ad_start_zz_unit_decade(nbr_a);	
			
				ft_ad_start_zz_unit_decade(nbr_b);

			/* 00 01 / 00 09>stop*/	
			}


		/*00 10 / 00 99 */	
		}



	/* bis 00 99 / 01 02 / bonus end 99 98`*/	
	}
}


int main ()
{
	ft_print_comb2();
}
