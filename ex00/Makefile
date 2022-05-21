# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 02:48:25 by tkirihar          #+#    #+#              #
#    Updated: 2022/05/22 01:23:11 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS		= megaphone.cpp

CPPC			= clang++

CPPFLAGS		= -Wall -Wextra -Werror -std=c++98

.PHONY: all fclean re

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CPPC) $(CPPFLAGS) $^ -o $@

fclean:
			rm -f $(NAME)

re:			fclean all
