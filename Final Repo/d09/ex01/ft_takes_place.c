/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:48:01 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/06 19:24:33 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_word(void)
{
	printf("%s","THE FOLLOWING TAKES PLACE BETWEEN ");
}
void	ft_AM(hour)
{
    if (hour == 24)
        printf("%d",11,"%s",".00 P.M. AND","%d",1,"%s",".00 A.M.");
	else if (hour == 1)
		printf("%d",12,"%s",".00 A.M. AND","%d",2,"%s",".00 A.M.");
	else if (hour == 2)
		printf("%d",1,"%s",".00 A.M. AND","%d",3,"%s",".00 A.M.");
	else if (hour == 3)
		printf("%d",2,"%s",".00 A.M. AND","%d",4,"%s",".00 A.M.");
	else if (hour == 4)
		printf("%d",3,"%s",".00 A.M. AND","%d",5,"%s",".00 A.M.");
	else if (hour == 5)
		printf("%d",4,"%s",".00 A.M. AND","%d",6,"%s",".00 A.M.");
	else if (hour == 6)
		printf("%d",5,"%s",".00 A.M. AND","%d",7,"%s",".00 A.M.");
	else if (hour == 7)
		printf("%d",6,"%s",".00 A.M. AND","%d",8,"%s",".00 A.M.");
	else if (hour == 8)
		printf("%d",7,"%s",".00 A.M. AND","%d",9,"%s",".00 A.M.");
	else if (hour == 9)
		printf("%d",8,"%s",".00 A.M. AND","%d",10,"%s",".00 A.M.");
	else if (hour == 10)
		printf("%d",9,"%s",".00 A.M. AND","%d",11,"%s",".00 A.M.");
	else (hour == 11)
		printf("%d",10,"%s",".00 A.M. AND","%d",12,"%s",".00 P.M.");
}
void	ft_PM(hour)
{
    if (hour == 12)
        printf("%d",11,"%s",".00 A.M. AND","%d",1,"%s",".00 P.M.");
    else if (hour == 13)
        printf("%d",12,"%s",".00 P.M. AND","%d",2,"%s",".00 P.M.");
    else if (hour == 14)
        printf("%d",1,"%s",".00 P.M. AND","%d",3,"%s",".00 P.M.");
    else if (hour == 15)
        printf("%d",2,"%s",".00 P.M. AND","%d",4,"%s",".00 P.M.");
    else if (hour == 16)
        printf("%d",3,"%s",".00 P.M. AND","%d",5,"%s",".00 P.M.");
    else if (hour == 17)
        printf("%d",4,"%s",".00 P.M. AND","%d",6,"%s",".00 P.M.");
    else if (hour == 18)
        printf("%d",5,"%s",".00 P.M. AND","%d",7,"%s",".00 P.M.");
    else if (hour == 19)
        printf("%d",6,"%s",".00 P.M. AND","%d",8,"%s",".00 P.M.");
    else if (hour == 20)
        printf("%d",7,"%s",".00 P.M. AND","%d",9,"%s",".00 P.M.");
    else if (hour == 21)
        printf("%d",8,"%s",".00 P.M. AND","%d",10,"%s",".00 P.M.");
    else if (hour == 22)
        printf("%d",9,"%s",".00 P.M. AND","%d",11,"%s",".00 P.M.");
    else (hour == 23)
        printf("%d",10,"%s",".00 P.M. AND","%d",12,"%s",".00 A.M.");
}
void	ft_takes_place(int hour)
{
	if (hour >= 12)
	{
		ft_word();
		ft_PM();
	}
	else
	{
		ft_word();
		ft_AM();
	}
}
