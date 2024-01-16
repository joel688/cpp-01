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
