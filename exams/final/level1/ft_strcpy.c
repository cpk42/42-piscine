/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:30:11 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/20 11:37:41 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	s1 = s2;
	return (s1);
}

int	main()
{
	printf("%s", ft_strcpy("", "copy this bitch rn 12354353745\n7568698778067673546 436346546 34t erg3g rgr3g \nrgr er bdfbdfh e5yt4w t43y\n rg eg"));
	return (0);
}
