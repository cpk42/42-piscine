/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:19:18 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 19:11:29 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "header.h"
char	objs[] = "000";
int		length;
int		height;

void	ft_putchar(char c);
void	declare_global(char *arr);

int return_num(char *str)
{
	int		count;
	int		i;
	char	*num;

	count = 0;
	while (str[count] >= 48 && str[count] <= 57)
		count++;
	num = (char *)malloc(sizeof(char) * count);
	i = 0;
	while (i < count)
	{
		num[i] = str[i];
		i++;
	}
	return (ft_atoi(num));
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
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

int		check_gvars(void)
{
	int i;

	i = 0;
	if (objs[0] != objs[1] && objs[0] != objs[2])
	{
		if (objs[1] != objs[2])
			return (1);
	}
	return (0);
}

int    check_map(char *arr, int pos, int count)
{
	int i;
	int toggle;

	toggle = 0;
	i = 0;
	length = count;
	height = return_num(arr);
	if (check_gvars() == 0)
		return (0);
	while (arr[pos] != '\0')
	{
		if (arr[pos] == objs[0] || arr[pos] == objs[1] || arr[pos] == objs[2])
		{
			i++;
			pos++;
		}
		else if (arr[pos] == '\n' && i == length)
		{
			pos++;
			i = 0;
		}
		else if (!(arr[pos] == objs[0] || arr[pos] == objs[1] || arr[pos] == objs[2]) && !(arr[pos] == '\n' && i == count))
		{
			printf("%s", "breaking right here");
			printf("%c", '\n');
			return (0);
		}
	}
	return (1);
}

int		is_valid(char *arr)
{
	int count;
	int pos;

	pos = 0;
	count = 0;
	declare_global(arr);
	while (arr[pos] != '\n')
		pos++;
	pos++;
	while (arr[pos] != '\n')
	{
		pos++;
		count++;
	}
	pos++;
	if (check_map(arr, pos, count) == 1)
		return (1);
	printf("%s", "im a cunt");
	return (0);
}

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

char	*g_array(int fd, char *av)
{
	char	*str;
	int		i;
	char	buf;
	char	c;
	i = 0;
	while (read(fd, &buf, 1))
		i++;
	i++;
	str = malloc(sizeof(char) * i);
	close(fd);
	fd = open(av, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1))
	{
		str[i] = c;
		i++;
	}
	close(fd);
	return (str);
}

void	declare_global(char *arr)
{
	int		i;
	int		x;

	i = 0;
	x = 2;
	while (arr[i] != '\n')
		i++;
	i--;
	while (x > -1)
	{
		objs[x] = arr[i];
		x--;
		i--;
	}
}

char	*g_map(char *av)
{
	int fd;
	char *arr;

	fd = open(av, O_RDONLY);
	arr = g_array(fd, av);
	fd = close(fd);
	return (arr);
}

void	solve()
{

}

char	*remove_bs(char *str)
{
	int		i;
	int		x;
	char	*new;

	i = 0;
	x = 0;
	new = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
		else
		{
			new[x] = str[i];
			i++;
			x++;
		}
	}
	free(str);
	return (new);
}

//char	**gen_2d(char *arr)
//{
//	int		x;
//	int		y;
//	int		i;
//	char	**map;

//	i = 0;
//	x = 0;
//	y = 0;
//	arr = remove_bs(arr);
//	map = (char*)malloc(sizeof(char) * height * length);
//	while (map[x] != '\0')
//	{
//		while (map[x][y] != '\0')
//
//	}
//	return (map);
//}

int	main(int argc, char **argv)
{
	int		nmap;
	char	**map;
	char	*arr;

	nmap = 1;
	while (nmap < argc)
	{
		arr = g_map(argv[nmap]);
		if (is_valid(arr) == 1)
		{
			//arr = gen_2d(arr);
			printf("%s", "good");
		}
		else
			ft_putstr("map error\n");
		nmap++;
	}
	printf("%s", objs);
	printf("%d", length);
	printf("%d", height);
	return (0);
}
