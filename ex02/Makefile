# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:49:38 by joakoeni          #+#    #+#              #
#    Updated: 2024/01/18 10:49:39 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= HI_THIS_IS_BRAIN

CXX				= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp\

OBJS			= $(SRCS:.cpp=.o)

all				: $(NAME)

$(NAME)		: $(OBJS)
						$(CXX)	$(CXXFLAGS)	$(OBJS) -o $(NAME)

clean			: 
						rm -rf $(OBJS)

fclean		: clean
						rm -rf $(NAME)

re				: fclean all

.PHONY		: all clean fclean re
