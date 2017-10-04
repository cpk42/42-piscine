/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:43:48 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 22:53:25 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(char octet)
{
	int i;

	i = 7;
	while (i >= 0)
	{
		if (octet >> i & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
}

int main()
{
	print_bits('c');
	return (0);
}

