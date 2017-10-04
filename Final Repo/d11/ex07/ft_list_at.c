/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:45:14 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/12 21:12:10 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;
	t_list				*tmp;

	i = 1;
	tmp = begin_list;
	if (!tmp)
		return (0);
	while (i < nbr)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
