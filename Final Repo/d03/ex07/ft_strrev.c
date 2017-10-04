/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrrev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 19:26:59 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 14:24:42 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//char	*ft_strrev(char *str)
//{
//	int count;
//	int k;
//	int swap;

//	count = 0;
//	while (str[count] != '\0')
//	{
//		count++;
//	}
//	k = 0;
//	count--;
//	while (count > count / 2)
//	{
//		swap = str[k];
//		str[k] = str[count];
//		str[count] = swap;
//		k++;
//		count--;
//	}
//	return (str);
//}

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	t;

	l = 0;
	while (str[l] != '\0')
		l++;
	i = -1;
	while (++i < --l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
	}
	return (str);
}
