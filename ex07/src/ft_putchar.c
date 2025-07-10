/******************************************************************************/
/*                                                                            */
/* ft_putchar.c                                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/09 22:50:48 by Xavier.Megnoux                             */
/* Updated: 2025/05/11 17:28:45 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putchar.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}