/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:16:41 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/11 21:12:41 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i] + 48);
		i++;
	}
}
