/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:14:24 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/13 21:37:32 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_list.h"

int	ft_display(char **av)
{
	int		fd;
	char	buf;

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open() error.\n");
		return (1);
	}
	while (read(fd, &buf, 1))
		ft_putchar(buf);
	if (close(fd) == -1)
	{
		ft_putstr("Close() error.\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	ft_display(argv);
	return (0);
}
