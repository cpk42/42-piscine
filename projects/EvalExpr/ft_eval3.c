/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 14:57:12 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 15:37:57 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char stack[20];
int top = -1;

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if (top == -1)
		return -1;
	else
		return stack[top--];
}

int priority(char x)
{
	if (x == '(' || x == ')')
		return (0);
	if (x == '+' || x == '-')
		return (1);
	if (x == '*' || x == '/'|| x == '%')
		return (2);
}

char	*postfix(char *argv)
{
	char exp[20];
	char *e, x;
   
	while(*e != '\0')
	{
		if(*e == '(')
				push(*e);
		else if(*e == ')')
		{
			while((x = pop()) != '(')
				  printf(“%c”, x);
		}
		else
		{
			while(priority(stack[top]) >= priority(*e))
				printf(“%c”,pop());
			push(*e);
		}
		e++;
	}
	while(top != -1)
		return (pop());
}
