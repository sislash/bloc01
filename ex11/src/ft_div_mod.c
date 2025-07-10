/******************************************************************************/
/*                                                                            */
/* ft_div_mod.c                                                               */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/23 14:07:49 by Xavier.Megnoux                             */
/* Updated: 2025/05/23 19:02:31 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "/home/sckavens/Piscine_C/bloc01_fondamentaux/ex11/include/ft_div_mod.h"

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int resulta;
	int reste;

	resulta=a/b;
	*div=resulta;
	reste=a%b;
	*mod=reste;

}
