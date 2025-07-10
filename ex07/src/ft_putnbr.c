/******************************************************************************/
/*                                                                            */
/* ft_putnbr.c                                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/09 22:50:48 by Xavier.Megnoux                             */
/* Updated: 2025/05/11 17:28:45 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putnbr.h"
#include "../include/ft_putchar.h"

void ft_putchar(char c);

void ft_putnbr(int nb)
{
	if(nb==-2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if(nb<0)
	{
		ft_putchar('-');
		nb=-nb;
	}
	if(nb>=10)
	{
		ft_putnbr(nb/10);
		ft_putchar('0'+(nb%10));
	}
	else
	{
		ft_putchar('0'+nb);
	}
}
