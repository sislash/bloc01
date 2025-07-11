/******************************************************************************/
/*                                                                            */
/* main.c                                                                     */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/19 23:02:27 by Xavier.Megnoux                             */
/* Updated: 2025/05/20 15:55:33 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include <unistd.h>
#include "../include/ft_ultimate_ft.h"
#include "../include/ft_putnbr.h"
#include "../include/ft_putstr.h"

//void ft_putnbr(int nb);
//void ft_putstr(char *str);
//void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int val=0;
	int *p1=&val;
	int **p2=&p1;
	int ***p3=&p2;
	int ****p4=&p3;
	int *****p5=&p4;
	int ******p6=&p5;
	int *******p7=&p6;
	int ********p8=&p7;
	int *********p9=&p8;
	
	ft_ultimate_ft(p9);
	
	ft_putstr("Résultat : ");
	ft_putnbr(val);
	write(1, "\n", 1); // Résultat attendu : 42
	
	return 0;
}
