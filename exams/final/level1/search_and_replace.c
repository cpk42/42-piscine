/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:29:31 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 20:43:04 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_search_and_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			str[i] = b[0];
		i++;
	}
	ft_putstr(str);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else if (argv[2][1] != '\0' || argv[3][1] != '\0')
		ft_putchar('\n');
	else
		ft_search_and_replace(argv[1], argv[2], argv[3]);
	return (0);
}
