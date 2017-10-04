/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:32:25 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 19:58:25 by ckrommen         ###   ########.fr       */
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

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main()
{
	char c = swap_bits('c');
	print_bits(c);
	return (0);
}
