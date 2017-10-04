/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:16:12 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/01 19:54:57 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int nxt;
	int count;

	count = nb;
	nxt = nb + 1;
	while (count > 1)
	{
		if (nxt % count == 0)
		{
			ft_find_next_prime(nxt++);
		}
		count--;
	}
	return (nxt);
}
