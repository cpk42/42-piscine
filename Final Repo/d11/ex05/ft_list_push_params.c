/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:07:38 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/12 23:05:57 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*new;
	int		i;

	list = 0;
	i = 1;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = list;
		list = new;
		i++;
	}
	return (list);
}
