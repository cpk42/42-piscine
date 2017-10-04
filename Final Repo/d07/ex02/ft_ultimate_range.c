/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:34:48 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/06 15:54:19 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *temp;

	i = 0;
	temp = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	range = &temp;
	return (i);
}
