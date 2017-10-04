/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:18:00 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/04 21:18:01 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		f;
	char	x;

	f = n;
	i = 0;
	while (src[i] != '\0' && i != f)
	{
		x = src[i];
		dest[i] = x;
		i++;
	}
	while (i < f)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
