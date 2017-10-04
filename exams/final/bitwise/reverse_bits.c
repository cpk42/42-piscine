/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:22:19 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 19:25:43 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	reverse_bits(char octet)
{
	int i;

	i = 0;
	while (i <= 7)
	{
		if (octet >> i & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i++;
	}
}

int main()
{
	reverse_bits('c');
	return (0);
}
