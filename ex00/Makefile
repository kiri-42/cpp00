# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 02:48:25 by tkirihar          #+#    #+#              #
#    Updated: 2022/05/26 23:59:26 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS		= megaphone.cpp

CXX			= c++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

.PHONY: all fclean re

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CXX) $(CXXFLAGS) $^ -o $@

fclean:
			rm -f $(NAME)

re:			fclean all
