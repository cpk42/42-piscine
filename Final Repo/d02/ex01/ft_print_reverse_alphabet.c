/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 10:58:36 by ckrommen          #+#    #+#             */
/*   Updated: 2017/06/28 13:45:29 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
  write(1,&c,1);
  return (0);
}

void ft_print_alphabet(void)
{
	int i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i = i - 1;
	}
}

int main()
{
	ft_print_alphabet();
	write(1,"\n",1);
	return (0);
}
