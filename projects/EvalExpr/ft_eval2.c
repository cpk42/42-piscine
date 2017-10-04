/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:57:44 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 14:48:38 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int return_num(char *str, int *pos)
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

char    *ft_substring(char *str, int *pos)
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

int det_precedence(char *queue, char *str, int x, int *pos)
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

char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}

void push(char x)
{
	stack[++top] = x;
}

double	parse_atom(char*& expr)
{
	char *end_ptr;
	double res;

	expr = end_ptr;
	return (res);
}

double	parse_factors(char*& expr)
{
	double num1;
	char op;

	num1 = parse_atom(expr);
	op = *expr;
	while (expr[i] != '\0')
	{
		if (op != '/' && op != '*' && op != '%')
			return (num1);
		i++;
		num2 = parseAtom(expr);
		if (op == '/')
			num1 /= num2;
		else if (op == '*')
			num1 *= num2;
		else
			num1 %= num2;
	}
}

double	parse_summands(char*& expr)
{
	double	num1;
	double	num2;
	char	op;
	int		i;

	i = 0;
	op = *expr;
	num1 = parse_factors(expr);
	while (expr[i] != '\0')
	{
		if (op != '-' && op != '+')
			return (num1);
		i++;
		num2 = parse_factors(expr);
		if (op == '/')
			num1 /= num2;
		else if (op == '*')
			num1 *= num2;
		else
			num1 % num 2;
	}
}

double	eval_expr(char *expr)
{
	return parse_summands(expr);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	}
	return (0);
}
