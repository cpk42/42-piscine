/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:51:26 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/09 15:41:57 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	checkRow(int **grid, int num)
{
	while (j < 9)
	{
		if (j == y)
			continue;
		if (sudoku[x][y] == sudoku[x][j])
			return FALSE;
		j++;
	}
}

int	checkCol(int **grid, int num)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 3)
	{
		while (x < 9)
		{
			if (grid[x][y] != num && x == 8)
				return (y);
			else
				x++;
		}
		x = 0;
		y++;
	}
	return (y);
}

int	checkNon(int **grid, int x, int y)
{
//	while ()
	return (0);
}

int	isValid(int **arr)
{
	int x;
	int y;
	return (0);
}



void	grid(int argc, char **argv)
{
	int grid[9][9];
	int x;
	int y;

	x = 1;
	while (x < 10)
	{
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				grid[x - 1][y] = 0;
			else
				grid[x - 1][y] = argv[x][y] - 48;
			y++;
		}
		x++;
	}
}

void	print_grid(int **grid)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		while (y < 9)
		{
			ft_putchar(grid[x][y] + 48);
			ft_putchar(' ');
			y++;
		}
		y = 0;
		ft_putchar('\n');
		x++;
	}
}

int	main(int argc, char **argv)
{
	int **arr;

	if (argc != 10)
	{
		write(1, "ERROR: need more/less args/n", 27);
		return (0);
	}
	arr = grid(argc, argv); 
	print_grid(arr);
	return (0);
}
