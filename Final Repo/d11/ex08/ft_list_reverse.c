/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:51:59 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/12 17:51:25 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *cur;
	t_list *nxt;

	prev = 0;
	cur = *begin_list;
	prev = cur->next;
	cur->next = 0;
	prev->next = cur;
	while (cur)
	{
		prev = cur->next;
		nxt = prev->next;
		nxt = nxt->next;
		prev->next = cur;
	}
	*begin_list = prev;
}
