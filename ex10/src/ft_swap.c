/******************************************************************************/
/*                                                                            */
/* ft_swap.c                                                                  */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/20 15:59:38 by Xavier.Megnoux                             */
/* Updated: 2025/05/22 17:11:20 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include <unistd.h>
#include "/home/sckavens/Piscine42/ya00/ex10/include/ft_swap.h"

void ft_swap(int *a, int *b)
{
	int i=0;

	i=*b;
	*b=*a;
	*a=i;
}
