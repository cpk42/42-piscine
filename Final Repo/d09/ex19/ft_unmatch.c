/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:47:00 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/07 13:47:14 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int temp;
	int i;
	int x;

	x = 1;
	i = 0;
	temp = 0;
	return (ft_match(tab, length, x, temp));
}

int	ft_match(int *tab, int length, int x, int i)
{
	int temp;

	while (i <= length)
	{
		temp = tab[i];
		while (x <= length)
		{
			if (temp == tab[x])
				i++;
			else if (x == length && temp != tab[x])
				return (temp);
			else if (x + 1 != i && x + 1 < length)
				x++;
			else if (x + 2 <= length)
				x += 2;
			else
				return (temp);
		}
		if (i == 0)
			x = 1;
		else
			x = 0;
	}
	return (temp);
}
