/******************************************************************************/
/*                                                                            */
/* test_swap.c                                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/20 15:56:22 by Xavier.Megnoux                             */
/* Updated: 2025/05/21 08:57:53 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include <stdio.h>
#include "/home/sckavens/Piscine42/ya00/ex10/include/ft_swap.h"

void ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a=42;
	b=83;

	ft_swap(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}
