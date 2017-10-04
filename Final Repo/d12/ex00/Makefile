#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 16:15:03 by ckrommen          #+#    #+#              #
#    Updated: 2017/07/13 18:13:15 by ckrommen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = display

SRCS = ft_display_file.c ft_put.c

SRCS.O = ft_display_file.o ft_put.o

HEADER = ft_list.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	gcc $(FLAGS) $(SRCS) -o $(NAME) -I $(HEADER)

clean:
	rm -rf $(SRCS.O)

fclean: clean
	rm -rf $(NAME)

re: fclean all