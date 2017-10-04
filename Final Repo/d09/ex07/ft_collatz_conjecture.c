/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:58:03 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/07 01:31:55 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base > 1)
	{
		if (base % 2 != 0)
			return (1 + (1 + ft_collatz_conjecture(base * 3 + 1)));
		else
			return (1 + (1 + ft_collatz_conjecture(base / 2)));
	}
	return (0);
}
