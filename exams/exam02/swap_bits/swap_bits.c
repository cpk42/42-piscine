/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:42:13 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 19:21:07 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	swap;
	int i;

	swap = octet;
	i = 7;
	while (i >= 0)
	{
		if (swap >> i & 1)
			printf("%d", 1);
		else
			printf("%d", 0);
		i--;
	}
	return (swap);
}

int main()
{
	unsigned char my_char = 'c';
	int what_bit_i_am_testing = 0;

//	while (what_bit_i_am_testing < 8) {
//		if (my_char & 1) {
//			printf("bit %d is 1\n", what_bit_i_am_testing);
//		}
//		else {
//			printf("bit %d is 0\n", what_bit_i_am_testing);
//		}

//		what_bit_i_am_testing++;
//		my_char = my_char >> 1;
//	}
	swap_bits('c');
	return (0);
}
