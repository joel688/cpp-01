NAME		=		BraiiiiiiinnnzzzZ

CXX			=		g++
CXXFLAGS=		-Wall -Wextra -Werror -std=c++98

SRCS		=		main.cpp\
						Class/Zombie/Zombie.cpp\

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
