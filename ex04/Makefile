# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:51:06 by joakoeni          #+#    #+#              #
#    Updated: 2024/01/18 10:51:08 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp\

OBJS = $(SRCS:.cpp=.o)

all:					$(NAME)

$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean				:
						rm -rf $(OBJS)

fclean				:	clean
						rm -rf $(NAME) *.replace

re					:	fclean all

.PHONY				:	all clean fclean re
