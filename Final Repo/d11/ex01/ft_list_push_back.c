/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:38:02 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/12 20:56:53 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *cur;

	cur = *begin_list;
	if (cur)
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
