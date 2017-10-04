/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:39:55 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 12:01:56 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count = str[i] - 96;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			count = str[i] - 64;
		while (count > 0)
		{
			write(1, &str[i], 1);
			count--;
		}
		count = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		reverse_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
