/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:17:03 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 19:46:01 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int i;

	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr);
}

int	fu_atoi(char *str)
{
	int	nbr;

	nbr = 0;
	while (str)
	{
		nbr = nbr * 10 + (*str - '0');
		(*str)++;
	}
	return (nbr);
}
