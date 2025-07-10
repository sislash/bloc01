/******************************************************************************/
/*                                                                            */
/* ft_print_comb2.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/09 18:14:19 by Xavier.Megnoux                             */
/* Updated: 2025/05/09 22:50:21 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_comb2.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1=0;
	while(nbr1<=98)
	{
		nbr2=nbr1+1;
		while(nbr2<=99)
		{
			ft_putchar('0'+nbr1/10);
			ft_putchar('0'+nbr1%10);
			ft_putchar(' ');
			ft_putchar('0'+nbr2/10);
			ft_putchar('0'+nbr2%10);
			if(!(nbr1==98 && nbr2==99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}
