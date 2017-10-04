/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:32:37 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 20:51:05 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *temp, char a)
{
	int i;

	i = 0;
	while (temp[i])
	{
		if (temp[i] == a)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2, int i, int x, int y)
{
	char temp[2048];

	while (s1[x])
	{
		if (check(temp, s1[x]))
		{
			write(1, &s1[x], 1);
			temp[i] = s1[x];
			i++;
		}
		x++;
	}
	while (s2[y])
	{
		if (check(temp, s2[y]))
		{
			write(1, &s2[y], 1);
			temp[i] = s2[y];
			i++;
		}
		y++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2],0,0,0);
	write(1, "\n", 1);
	return (0);
}
