/******************************************************************************/
/*                                                                            */
/* test_print_combn.c                                                         */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/11 17:23:02 by Xavier.Megnoux                             */
/* Updated: 2025/05/19 23:00:40 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_combn.h"

void ft_print_combn(int n);

int main()
{
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(3);
	ft_putchar('\n');
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(4);
	ft_putchar('\n');
	ft_print_combn(9);
	ft_putchar('\n');
	return 0;
}
