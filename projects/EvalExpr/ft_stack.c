/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:38:22 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 19:11:02 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	push(t_stack *stack, t_stackcon *content)
{
	stack->contents[++stack->top] = *content;
}

t_stackcon	pop(t_stack *stack)
{
	return (stack->contents[stack->top--]);
}

int		isempty(t_stack *stack)
{
	//if (stack->top < 0)
	//return (1);
	return (stack->top < 0);
}

void	stack_init(t_stack *stack, int size)
{
	t_stackcon *stackelem;

	stackelem = (t_stackcon *)malloc(sizeof(t_stack) * size);
	if (stack)
	{
		stack->contents = stackelem;
		stack->top = -1;
	}
}

void	stackdestroy(t_stack *stack)
{
	free(stack->contents);
	stack->contents = NULL;
	stack->top = -1;
}
