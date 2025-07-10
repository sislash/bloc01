/******************************************************************************/
/*                                                                            */
/* ft_print_numbers.c                                                         */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/07 16:54:03 by Xavier.Megnoux                             */
/* Updated: 2025/05/19 22:53:52 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_numbers.h"

void ft_print_numbers(void)
{
	char nb=48;
	while(nb<=57)
	{
		write(1, &nb, 1);
		nb++;
	}
}
