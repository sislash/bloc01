/******************************************************************************/
/*                                                                            */
/* ft_putstr.c                                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/07/11 19:12:27 by Xavier.Megnoux                             */
/* Updated: 2025/07/11 19:54:27 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putstr.h"

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}