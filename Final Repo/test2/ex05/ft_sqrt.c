/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 16:24:05 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/01 19:57:29 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = nb / 2;
	while (nb > 0)
	{
		if (nb % i == 0)
		{
			if (i * i == nb)
			{
				return (i);
			}
		}
		i--;
	}
	return (0);
}
