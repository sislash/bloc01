/******************************************************************************/
/*                                                                            */
/* ft_putnbr.c                                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/07/11 18:54:27 by Xavier.Megnoux                             */
/* Updated: 2025/07/11 18:54:27 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putnbr.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= 10)
        ft_putchar(nb / 10);
    ft_putchar(nb % 10 + '0');
}