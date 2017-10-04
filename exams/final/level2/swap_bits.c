/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:52:12 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 19:36:06 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 0;
	while (i <= 7)
	{
		if (octet >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char c;
	int i;

	i = 7;
	while (i-- >= 0)
	{
		c = (c << 1) | (octet & 1);
		octet >>= 1;
	}
	return (c);
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main()
{
	print_bits('c');
	write(1, "\n", 1);
	print_bits(reverse_bits('c'));
	return (0);
}
