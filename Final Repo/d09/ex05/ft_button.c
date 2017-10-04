/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:53:21 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/06 23:07:55 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i < j && j < k && k > i)
		return (j);
	else if (j < i && i < k && k > j)
		return (i);
	else
		return (k);
}