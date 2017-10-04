/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvalExpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:49:23 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 14:56:30 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*"3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1"*/

#include <stdio.h>
#include <stdlib.h>
#include "ft_header.h"
#define MULT '*'
#define DIV '/'
#define MOD '%'
#define SUB '-'
#define ADD '+'
#define P1 ')'
#define P2 '('

int	precendence(char oper)
{
	if (oper == '(' || oper == ')')
		return (3);
	else if (oper == '/' || oper == '%' || oper == '*')
		return (2);
	else
		return (1);
}

int	return_num(char *str, int *pos)
{
	int count;
	int i;
	char *num;

	count = pos[0];
	while (str[count] >= 48 && str[count] <= 57)
		count++;
	num = (char *)malloc(sizeof(char) * (count - pos[0]));
	i = 0;
	while (i < count)
	{
		num[i] = str[pos[0]];
		i++;
		pos[0]++;
	}
	return (ft_atoi(num, count));
}

char	*ft_substring(char *str, int *pos)
{
	int count;
	int i;
	char *num;

	count = pos[0];
	while (str[count] >= 48 && str[count] <= 57)
		count++;
	num = (char *)malloc(sizeof(char) * (count - pos[0]));
	i = 0;
	while (i < count)
	{
		num[i] = str[pos[0]];
		i++;
		pos[0]++;
	}
	return (num);
}
void	pop(char *queue, char *output)
{
	int i;
	int x;

	i = ft_strlen(queue);
	x = ft_strlen(output) - 1;
	while (x >= 0)
	{
		output(x) = queue(i);
		output(x) = '0';
		x--;
		i++;
	}
}
void	push(char *str, int *pos, char *queue)
{
	int i;
	int end;

	end = ft_strlen(queue);
	queue[end] = str[pos[0]];
	pos[0]++;
}



int	det_precedence(char *queue, char *str, int x, int *pos)
{
	while (precendence(queue[x]) < precendence(str[pos[0]]))
		x++;
	if (precedence(queue[x] >= precendence(str[pos[0]]))
		pop(queue, output);
	return (output);
}

char	*reset_queue(char *queue)
{
	int i;

	i = 0;
	while (queue[i] != '\0')
	{
		queue[i] = '0';
		i++;
	}
	return (queue);
}

//First parse the string into polish notation using Shunting yard Algorithm
int		*shunt_parse(char *str, char *queue, int *output, int *pos, int x)
{
	int i;
	int out;

	out = 0;
	while (str[pos[0]] != '\0')
	{
		if (str[pos[0]] >= 48 && str[pos[0]] <= 57)
		{
			output[out] = ft_substring(str, pos);
			out++;
		}
		else if (str[pos[0]] == MULT || str[pos[0]] == DIV || str[pos[0]] == MOD ||
				 str[pos[0]] == ADD || str[pos[0]] == SUB || str[pos[0]] == P1 || str[pos[0]] == P2)
			output = det_precedence(queue, str, x, pos);
		queue = reset_queue;
		else
			pos[0]++;
	}
	return (output);
}

int	main(int argc, char **argv)
{
	char *queue;
	char *output;
	int count;
	int *pos;

	pos = malloc(sizeof(int));
	*pos = 0;
	if (argc == 2)
	{
	count = ft_strlen(argv[1]);
	queue = (char*)malloc(sizeof(char) * count);
	output = (int*)malloc(sizeof(int) * count);
	shunt_parse(argv[1], queue, output, pos, 0);
	}
	return (0);
}
