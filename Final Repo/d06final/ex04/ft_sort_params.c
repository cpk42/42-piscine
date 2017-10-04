/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:30:49 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/05 18:50:56 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	j = 0;
	i = 1;
	count = 0;
	while (i < argc)
	{
		str = argv[i];
		while (str[count] != '\0')
		{
			while (str[count] > str[count + 1])
				i--;
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
