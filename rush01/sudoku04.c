/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:13:11 by mhwangbo          #+#    #+#             */
/*   Updated: 2017/07/09 12:59:50 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TRUE 1
#define FALSE 0

int		promising(int **sudoku, int x, int y)
{
	int j;
	int k;
	
	j = 0;
	while (j < 9)
	{
		if (j == y)
			continue;
		if (sudoku[x][y] == sudoku[x][j])
			return FALSE;
		j++;
	}
	j = 0;
	while (j < 9)
	{
		if (j == x)
			continue;
		if (sudoku[x][y] == sudoku[j][y])
			return FALSE;
	}
	j = x / 3 * 3;
	while (j <= (x / 3) * 3 + 2)
	{
		k = y / 3 * 3;
		while (k <= (y / 3) * 3 + 2)
		{
			if (x == j && y == k)
				continue;
			if (sudoku[x][y] == sudoku[j][k])
				return FALSE;
			k++;
		}
		j++;
	}
	return TRUE;
}

int		solve(int **sudoku, int x, int y)
{
	int nx;
	int ny;
	int i;

	if (sudoku[x][y] == 0)
	{
		i = 1;
		while (i < 10)
		{
			sudoku[x][y] = i;
			if (promising(sudoku, x, y))
			{
				ny = y + 1;
				nx = x;
				if (ny == 9)
				{
					ny = 0;
					nx = x + 1;
					if (nx == 9)
						return TRUE;
				}
				if (solve(sudoku, nx, ny))
					return TRUE;
			}
			i++;
		}
		sudoku[x][y] = 0;
	}
	else
	{
		ny = y + 1;
		nx = x;
		if (ny == 9)
		{
			ny = 0;
			nx = x + 1;
			if (nx == 9)
				return TRUE;
		}
		if (solve(sudoku, nx, ny))
			return TRUE;
	}
	if (x == 0 && y == 0)
		write(1, "ERROR\n", 6);
	return FALSE;
}

char	**dot_to_zero(char **str)
{
	int i;
	int j;
	
	i = 0;
	j = 1;
	while (i < 9)
	{
		while (j < 10)
		{
			if (str[i][j] == '.')
				str[i][j] = '0';
			j++;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int n;
	int **sudoku;

	i = 0;
	j = 0;
	dot_to_zero(argv);
	while (i < 9)
	{
		while (j < 9)
		{
			sudoku[i][j] *= 10;
			sudoku[i][j] += argv[i + 1][j] - 48;
			j++;
		}
		i++;
	}
	if (!solve(sudoku, 0, 0))
		write(1, "Error\n", 6);
	solve(sudoku, 0, 0);
	write(1, "\n", 1);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &sudoku[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}



