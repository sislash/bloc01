/******************************************************************************/
/*                                                                            */
/* test_div_mod.c                                                             */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/21 08:58:42 by Xavier.Megnoux                             */
/* Updated: 2025/05/23 18:54:09 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include "/home/sckavens/Piscine_C/bloc01_fondamentaux/ex11/include/ft_div_mod.h"

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div;
	int mod;

	ft_div_mod(10, 3, &div, &mod);
	printf("%d,%d", div, mod);

	return 0;
}
