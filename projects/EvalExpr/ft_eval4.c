/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:09:37 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 19:40:39 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_stack	*solve(char *str, int x, int y, int i, int *pos);

int	calculate(char op, int num1, int num2, t_stack *value)
{
	int x;

	if (op == '*')
		x = (num1 * num2);
	else if (op == '/')
		x = (num1 / num2);
	else if (op == '%')
		x = (num1 % num2);
	else if (op == '+')
		x = (num1 + num2);
	else
		x = (num1 - num2);
	push(value, &x);
	return (x);
}

t_stack	*buffer(char *str)
{
	int i;
	int x;
	int y;
	int *pos;

	i = 0;
	x = 40;
	y = 0;
	*pos = 0;
	return (solve(str, x, y, i, pos));
}

int eval_expr(char *str)
{
	t_stack *stack;
	int res;

	stack = buffer(str);
	res = stack->top;
	return (res);
}

void	parenthesis(int i, int x, int y, t_stack *value, t_stack *stack)
{
	int k;

	while (stack->top != '(')
	{
		i = pop(stack);
		x = pop(value);
		y = pop(value);
		k = calculate(i, x, y, value);
		push((value), &k);
	}
	pop(stack);
}

int	precedence(int oper)
{
	if (oper == '/' || oper == '%' || oper == '*')
		return (2);
	else
		return (1);
}

void	init(t_stack *stack, t_stack *value, char *str)
{
	stack_init(stack, ft_strlen(str));
	stack_init(value, ft_strlen(str));	
}

t_stack*	solve(char *str, int x, int y, int i, int *pos)
{
	t_stack	*stack;
	t_stack	*value;
	
	init(stack, value, str);
	while (str[pos[0]] != '\0')
	{
		x = fu_atoi(&str[pos[0]]);
		i = return_num(str, pos);
		if (str[pos[0]] >= '0' || str[pos[0]] <= '9')
			push(value, &i);
		else if (str[pos[0]] == '(')
			push(stack, &x);
		else if (str[pos[0]] == ')')
			parenthesis(i, x, y, value, stack);
		else if (!isempty(stack))
		{
			while (stack->top >= precedence(stack->top))
				y = calculate(pop(stack), pop(value), pop(value), value);
			push(stack, &y);
		}
		else
			x = x;
		pos[0]++;
	}
	return (value);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
