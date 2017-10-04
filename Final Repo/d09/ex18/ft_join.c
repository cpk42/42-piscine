/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:32:25 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/07 12:50:07 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_chars(char **temp, char **src)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (temp[i])
	{
		sum += ft_strlen(temp[i]);
		sum += ft_strlen(src);
		i++;
	}
	return (sum);
}

char*ft_strcat(char *dest, char *src)
{
	int l;
	int i;

	l = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + l] = src[i];
		i++;
	}
	dest[i + l] = '\0';
	return (dest);
}

char*ft_join(char *tab, char *sep)
{
	int		c;
	char	*str;
	int		i;
	int		index;

	c = count_chars(tab, sep);
	str = (char*)malloc(sizeof(char) * (c + 1));
	str[0] = '\0';
	i = 0;
	index = 0;
	while (temp[i])
	{
		ft_strcat(sep, temp[i]);
		ft_strcat(str, sep);
		i++;
	}
	str[c - ft_strlen(sep)] = '\0';
	return (str);
}
