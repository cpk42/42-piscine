/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 19:02:34 by ckrommen          #+#    #+#             */
/*   Updated: 2017/06/29 13:34:39 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (a < 7)
	{
		b = a++ + 1;
		while (b < 8)
		{
			c = ++b + 1;
			while (c < 10)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
		}
	}
	ft_putchar(8);
}
