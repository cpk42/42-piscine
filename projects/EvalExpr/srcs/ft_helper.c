/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:08:54 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 19:45:25 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../ft_header.h"

void	ft_putchar(char n);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748);
		ft_putnbr(3648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		ft_putchar(nb);
	}
}

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int return_num(char *str, int *pos)
{
	int count;
	int i;
	char *num;

	count = pos[0];
	while (str[count] >= 48 && str[count] <= 57)
		count++;
	num = (char *)malloc(sizeof(char) * (count - pos[0]));
	i = 0;
	while (i < count)
	{
		num[i] = *str;
		i++;
		(*str)++;
	}
	return (ft_atoi(num, count));
}
