/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:04:35 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/07 00:53:57 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*factory[i] != '\0')
	{
		while (**factory[j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		i++;
	}
	free(factory);
}
