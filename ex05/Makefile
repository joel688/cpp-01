# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:51:33 by joakoeni          #+#    #+#              #
#    Updated: 2024/01/18 10:51:35 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= HARL

CXX				= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS 			= main.cpp\
			 			Class/Harl/Harl.cpp\

OBJS			= $(SRCS:.cpp=.o)

all				:	$(NAME)

$(NAME)		:	$(OBJS)
						$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean			:
						rm -rf $(OBJS)

fclean		:	clean
						rm -rf $(NAME)

re				:	fclean all

.PHONY		:	all clean fclean re

