/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:35:53 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 18:49:27 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	last_word(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 32 && str[i + 1] >= 33) && str[i + 1] <= 127)
			x = i + 1;
		i++;
	}
	while (str[x] >= 33 && str[x] <= 127)
	{
		write(1, &str[x], 1);
	x++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1])
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
