/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:20:22 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/19 20:22:20 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 1)
		write(1, "a\n", 2);
	else if (argv[1])
		write(1, "a\n", 2);
	else
		write(1, "a\n", 2);
	return (0);
}
