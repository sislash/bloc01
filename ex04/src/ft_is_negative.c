/******************************************************************************/
/*                                                                            */
/* ft_is_negative.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/08 17:39:46 by Xavier.Megnoux                             */
/* Updated: 2025/05/08 18:22:36 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_is_negative.h"

void ft_is_negative(int n)
{
	if(n<0)
	{
		write(1, "N", 1);
	}
	else if(n>=0)
	{
		write(1, "P", 1);
	}
	else
		write(5, "Error", 5);
}
