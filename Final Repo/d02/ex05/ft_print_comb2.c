/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:38:54 by ckrommen          #+#    #+#             */
/*   Updated: 2017/06/28 22:58:17 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char n)
{
	write(1,&n,1);
	return (0);
}

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a < 10)
	{
		while (b < 9)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					ft_putchar(a + '0');
					ft_putchar(b + '0');
					ft_putchar(' ');
					ft_putchar(c + '0');
					ft_putchar(d + '0');
					ft_putchar(',');
					ft_putchar(' ');
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
