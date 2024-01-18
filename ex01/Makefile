# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:48:59 by joakoeni          #+#    #+#              #
#    Updated: 2024/01/18 10:49:01 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		Moarbrainz!

CXX			=		g++
CXXFLAGS=		-Wall -Wextra -Werror -std=c++98

SRCS		=		main.cpp\
						Class/Zombie/Zombie.cpp\
						zombieHorde.cpp\

OBJS		=		$(SRCS:.cpp=.o)

all			:		$(NAME)

$(NAME)	:		$(OBJS)
						$(CXX)	$(CXXFLAGS)	$(OBJS) -o $(NAME)

clean		:
						rm -rf $(OBJS)

fclean	:		clean
						rm -rf $(NAME)

re			:		fclean all

.PHONY	:		all clean	fclean re
