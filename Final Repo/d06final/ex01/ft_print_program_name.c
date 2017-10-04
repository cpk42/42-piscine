/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:29:30 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/05 19:27:14 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*str;

	argc = 0;
	str = *argv;
	while (str[argc] != '\0')
	{
		ft_putchar(str[argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
