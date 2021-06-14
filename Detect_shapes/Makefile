# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 12:11:02 by mangheli          #+#    #+#              #
#    Updated: 2021/06/13 19:56:09 by mkrokis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

HEADER = ft_lib.h

CFILES = *.c

all:
	gcc -I $(HEADER) $(CFILES) -Wall -Wextra -Werror -o $(NAME)

clean: all
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: flean all
