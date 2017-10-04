/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:++:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:33:29 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/16 19:31:09 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdio.h> //DELETE ME
# include <stdlib.h>
# include <unistd.h>

typedef int t_stackcon;
typedef struct	s_stack
{
	t_stackcon		*contents;
	int				top;
	int				size;
}				t_stack;

int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_split_whitespaces(char *str);
int				ft_atoi(char *str, int count);
void			push(t_stack *stack, t_stackcon *content);
t_stackcon		pop(t_stack *stack);
int				isempty(t_stack *stack);
void			stack_init(t_stack *stack, int size);
int				return_num(char *str, int *pos);
int				fu_atoi(char *str);
#endif
