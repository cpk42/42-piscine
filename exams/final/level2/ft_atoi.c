/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:33:36 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 15:07:07 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int neg;

	i = 0;
	num = 0;
	neg = 1;

	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-' && neg != -1)
			neg = -1;
		else if (neg == -1)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int main()
{
	printf("%d", ft_atoi("asdasdasdsaasd asdasgssd sgsd       -123"));
	return (0);
}
