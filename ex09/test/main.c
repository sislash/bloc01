/******************************************************************************/
/*                                                                            */
/* test_ultimate_ft.c                                                         */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/19 23:02:27 by Xavier.Megnoux                             */
/* Updated: 2025/05/20 15:55:33 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
void ft_ultimate_ft(int *********nbr);

int a;
int *p1=&a;
int **p2=&p1;
int ***p3=&p2;
int ****p4=&p3;
int *****p5=&p4;
int ******p6=&p5;
int *******p7=&p6;
int ********p8=&p7;

int main(void)
{
	ft_ultimate_ft(&p8);
}
