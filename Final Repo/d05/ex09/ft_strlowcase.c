/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:25:43 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/04 21:25:46 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 65 && str[index] <= 90))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
