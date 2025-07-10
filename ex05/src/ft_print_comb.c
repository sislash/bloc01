/******************************************************************************/
/*                                                                            */
/* ft_print_comb.c                                                            */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/08 18:30:36 by Xavier.Megnoux                             */
/* Updated: 2025/05/09 18:13:42 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_comb.h"

void ft_putchar(char c)
{
	write(1, &c , 1);
}

void ft_print_comb(void)
{
	int nb1;
	int nb2;
	int nb3;

	nb1=0;
	while(nb1<=7)
	{
		nb2=nb1+1;
		while(nb2<=8)
		{
			nb3=nb2+1;
			while(nb3<=9)
			{
				ft_putchar('0'+nb1);
				ft_putchar('0'+nb2);
				ft_putchar('0'+nb3);
				if (!(nb1 ==7 && nb2 == 8 && nb3==9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
