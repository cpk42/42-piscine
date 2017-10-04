/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:24:42 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/04 21:24:44 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 97 && str[index] <= 122))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
