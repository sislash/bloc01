/******************************************************************************/
/*                                                                            */
/* ft_putchar.c                                                               */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/06 22:09:28 by Xavier.Megnoux                             */
/* Updated: 2025/06/11 16:23:50 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putchar.h"

void ft_putchar(char c)
{
	write(1, &c, 1); /* stdout, caracter, 1 octet */
}
