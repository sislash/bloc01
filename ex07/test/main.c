/******************************************************************************/
/*                                                                            */
/* test_putnbr.c                                                              */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/09 22:48:14 by Xavier.Megnoux                             */
/* Updated: 2025/05/11 17:22:29 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(83);
	write(1, "\n", 1);
	ft_putnbr(-83);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	return 0;
}
