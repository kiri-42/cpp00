# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:26:22 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/26 16:39:47 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRCS		= main.cpp Contact.cpp PhoneBook.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPC		= clang++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPPC) $(CPPFLAGS) $^ -o $@

%.o:		%.cpp
			$(CPPC) $(CPPFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
