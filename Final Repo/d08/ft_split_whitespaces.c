/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:54:54 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/07 23:34:23 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skipWhite(char *str)
{
	int i;

	i = 0;
	while (str[i] <= 32)
		i++;
	return (i);
}

int	**calcarray(char **str)
{
	int x;
	int i;
	char *arr;

	i = 0;
	x = 0;
	char (*str)
	while (str[i])
	{
		while (str[x])
		{
			*dest = (char*)malloc(sizeof(char) + (strlen(str)));
			x++;
		}
		x = 0;
		i++;
	}
	return (arr);
}

int	*word_count(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == 32)
		i++;
	}
	count++;
	i += skipwhite(str)
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char **dest;
	int i;
	int x;

	
	x = 0;
	i = 0;
	while (str[i] != '/0')
	{
		while (str[x] == 32)
			str++;
		if (str[x] != 32)
			
	}
}
